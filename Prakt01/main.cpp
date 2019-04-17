#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include <QtGui>

int main(int argc, char *argv[])
{
    QSurfaceFormat format;
    // OpenGL Version
    format.setVersion(3, 3);
    // OpenGL Profile (only Core allowed!)
    format.setProfile(QSurfaceFormat::CoreProfile);
    // Ask for a debug context, so QOpenGLDebugLogger works
    format.setOption(QSurfaceFormat::DebugContext);
    // Apply settings
    QSurfaceFormat::setDefaultFormat(format);

    QApplication a(argc, argv);
    MainWindow w;
    w.show();


    return a.exec();
}
