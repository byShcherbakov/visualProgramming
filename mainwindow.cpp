#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QEvent>
#include <QHBoxLayout>
#include <QHash>
#include <QPushButton>
#include <QStackedWidget>
#include <QWidget>

namespace {

// Return one canonical section name, regardless of spelling or button suffix.
QString sectionFromName(QString value)
{
    value = value.toLower().trimmed();
    value.remove('&');
    value.remove(' ');
    value.remove('_');
    value.remove('-');

    if (value.startsWith("home") || value.startsWith("главн"))
        return "home";
    if (value.startsWith("climat") || value.startsWith("climate") ||
        value.startsWith("климат"))
        return "climat";
    if (value.startsWith("lights") || value.startsWith("light") ||
        value.startsWith("leight") || value.startsWith("lehit") ||
        value.startsWith("свет"))
        return "lights";
    if (value.startsWith("sound") || value.startsWith("звук"))
        return "sound";
    if (value.startsWith("camer") || value.startsWith("камер"))
        return "cameras";
    return {};
}

// Only the OUTER stack. Nested Pade_2, Pade_3, etc. are not navigation stacks.
QStackedWidget *findMainStack(QWidget *window)
{
    if (auto *stack = window->findChild<QStackedWidget *>("Pade"))
        return stack;
    if (auto *stack = window->findChild<QStackedWidget *>("stackedWidget"))
        return stack;

    for (auto *stack : window->findChildren<QStackedWidget *>()) {
        bool homeFound = false;
        bool climateFound = false;
        for (int i = 0; i < stack->count(); ++i) {
            const QString key = sectionFromName(stack->widget(i)->objectName());
            homeFound |= (key == "home");
            climateFound |= (key == "climat");
        }
        if (homeFound && climateFound)
            return stack;
    }
    return nullptr;
}

// Provides navigation on a page if that page has no complete top menu in its .ui.
// The bar is a child of that page, so it appears ONLY on that page.
class MissingNavigation : public QWidget
{
public:
    explicit MissingNavigation(QWidget *parent) : QWidget(parent)
    {
        setObjectName("codeGeneratedNavigation");
        parent->installEventFilter(this);
        setStyleSheet(R"(
            QWidget#codeGeneratedNavigation { background: #171717; border: 1px solid #444; }
            QWidget#codeGeneratedNavigation QPushButton {
                color: white; background: #303030;
                border: 1px solid #555; padding: 10px 5px;
            }
            QWidget#codeGeneratedNavigation QPushButton:hover { background: #505050; }
        )");
    }

    void reposition()
    {
        if (!parentWidget()) return;
        move(qMax(5, parentWidget()->width() - width() - 10), 7);
        raise();
    }

protected:
    bool eventFilter(QObject *watched, QEvent *event) override
    {
        if (watched == parentWidget() && event->type() == QEvent::Resize)
            reposition();
        return QWidget::eventFilter(watched, event);
    }
};

} // namespace

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QStackedWidget *pages = findMainStack(this);
    if (!pages) {
        qWarning() << "ERROR: Main QStackedWidget not found."
                   << "Save the current Designer form to visualProgramming/mainwindow.ui";
        return;
    }

    // Page names in Designer: Home, Climat, Lights, Sound, Camers.
    QHash<QString, QWidget *> destinations;
    for (int i = 0; i < pages->count(); ++i) {
        QWidget *page = pages->widget(i);
        const QString key = sectionFromName(page->objectName());
        qInfo() << "Main page" << i << ":" << page->objectName() << "=>" << key;
        if (!key.isEmpty())
            destinations.insert(key, page);
    }

    // The old UI file uses an unnamed widget for Cameras in some versions.
    if (!destinations.contains("cameras") && pages->count() == 5) {
        for (int i = 0; i < pages->count(); ++i) {
            QWidget *candidate = pages->widget(i);
            if (sectionFromName(candidate->objectName()).isEmpty()) {
                destinations.insert("cameras", candidate);
                qInfo() << "Using unnamed page for Cameras:" << candidate->objectName();
                break;
            }
        }
    }

    for (const char *name : {"home", "climat", "lights", "sound", "cameras"}) {
        const QString key = QString::fromLatin1(name);
        if (!destinations.contains(key))
            qWarning() << "Missing page in saved mainwindow.ui:" << key;
    }

    // The app ALWAYS starts on Home, independently of Designer's selected page.
    if (QWidget *home = destinations.value("home", nullptr))
        pages->setCurrentWidget(home);

    // Debugging: see which page the application actually shows.
    connect(pages, &QStackedWidget::currentChanged, this,
            [pages](int index) {
                if (QWidget *page = pages->widget(index))
                    qInfo() << "Now showing:" << page->objectName();
            });

    // Attach navigation buttons on ALL five pages, including buttons nested
    // inside Pade_2 / Pade_3 / etc. This does NOT switch nested stacks.
    for (int i = 0; i < pages->count(); ++i) {
        QWidget *page = pages->widget(i);
        QHash<QString, bool> hasButtons;

        for (QPushButton *button : page->findChildren<QPushButton *>()) {
            // A button caption is preferred over its auto-generated Designer name.
            QString key = sectionFromName(button->text());
            if (key.isEmpty())
                key = sectionFromName(button->objectName());

            QWidget *destination = destinations.value(key, nullptr);
            if (!destination)
                continue;

            hasButtons.insert(key, true);
            connect(button, &QPushButton::clicked, this,
                    [pages, destination, button]() {
                        qInfo() << "Clicked" << button->objectName()
                                << "->" << destination->objectName();
                        pages->setCurrentWidget(destination);
                    });
        }

        // Older saved .ui forms have navigation only on Home and Climat.
        // Provide an overlay on incomplete pages, without modifying their .ui.
        if (hasButtons.size() < 5) {
            auto *bar = new MissingNavigation(page);
            auto *layout = new QHBoxLayout(bar);
            layout->setContentsMargins(5, 5, 5, 5);
            layout->setSpacing(4);

            struct Entry { const char *text; const char *key; };
            const Entry entries[] = {
                {"Home", "home"}, {"Climat", "climat"},
                {"Lights", "lights"}, {"Cameras", "cameras"},
                {"Sound", "sound"}
            };
            for (const Entry &entry : entries) {
                QWidget *destination = destinations.value(QString::fromLatin1(entry.key));
                if (!destination)
                    continue;
                auto *button = new QPushButton(QString::fromLatin1(entry.text), bar);
                button->setFixedWidth(78);
                layout->addWidget(button);
                connect(button, &QPushButton::clicked, this,
                        [pages, destination]() {
                            pages->setCurrentWidget(destination);
                        });
            }

            bar->adjustSize();
            bar->reposition();
            bar->show();
            qInfo() << "Added missing navigation buttons to" << page->objectName();
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
