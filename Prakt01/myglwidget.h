#ifndef MYGLWIDGET_H
#define MYGLWIDGET_H
#include <QOpenGLWidget>
#include <QKeyEvent>
#include <QObject>
#include <QVector3D>
#include <iostream>
#include <QOpenGLFunctions>

class MyGLWidget : public QOpenGLWidget, public QOpenGLFunctions
{
    Q_OBJECT
private :
    int m_FOV, m_Angle, m_Rot_A, m_Rot_B, m_Rot_C;
    double m_Near, m_Far;
    //1: perspective 0: orthogonal
    bool m_projectionmode = true;
    QVector3D cameraPosition;

public:
    MyGLWidget(QWidget *parent = nullptr);

public slots:
    void setFOV(int value);
    void setAngle(int value);
    void setProjectionMode();
    void setNear(double value);
    void setFar(double value);
    void setRotationA(int value);
    void setRotationB(int value);
    void setRotationC(int value);
    void correctNear();
    void correctFar();
    void keyPressEvent(QKeyEvent *event);

signals: void nearHaveToChange(double value);
         void farHaveToChange(double value);
         void FOVChanged(int value);
         void angleChanged(int value);
         void nearChanged(double value);
         void farChanged(double value);
protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;


};

#endif // MYGLWIDGET_H
