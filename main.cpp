#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "systeminfo.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    SystemInfo systemInfo;

    engine.rootContext()->setContextProperty("systemInfo", &systemInfo);

    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("si-testing", "Main");

    return app.exec();
}
