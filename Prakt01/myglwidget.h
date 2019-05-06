#ifndef MYGLWIDGET_H
#define MYGLWIDGET_H
#include <QOpenGLWidget>
#include <QKeyEvent>
#include <QObject>
#include <QVector3D>
#include <iostream>
#include <QColor>
#include <QOpenGLFunctions>
#include <QOpenGLShaderProgram>
#include <QOpenGLFunctions_4_5_Core>
class MyGLWidget : public QOpenGLWidget, QOpenGLFunctions_4_5_Core
{
    Q_OBJECT
private :
    QOpenGLShaderProgram *mp_Program;
    GLuint m_vbo;
    GLuint m_vao;

    int m_FOV, m_Angle, m_Rot_A, m_Rot_B, m_Rot_C;
    double m_Near, m_Far;
    //1: perspective 0: orthogonal
    bool m_projectionmode = true;
    QVector3D cameraPosition;


public:
    MyGLWidget(QWidget *parent );
    ~MyGLWidget();
     void reset();

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
     void initializeGL() ;
     void resizeGL(int w, int h) ;
     void paintGL() ;

};

#endif // MYGLWIDGET_H
