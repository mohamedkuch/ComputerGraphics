#include "myglwidget.h"

MyGLWidget::MyGLWidget(QWidget *parent) : QOpenGLWidget(parent)
{
    m_FOV = 45;
    m_Angle = 0;
    m_Far = 2;
    m_Near = 0;
    m_Rot_A= 0;
    m_Rot_B= 0;
    m_Rot_C= 0;

    setFocusPolicy(Qt::StrongFocus);
}
void MyGLWidget::setFOV(int value)
{
    if (value != m_FOV)
        m_FOV = value;
     std::cout << "FOV Value "<< value<< "\n";
}

void MyGLWidget::setFar(double value)
{

    if(abs(m_Near - value) < 2.0f){
        emit farHaveToChange(value);
    }
    else{
        m_Far = value;
        std::cout << "Far Value "<< value<< "\n";
    }

}

void MyGLWidget::setNear(double value)
{
    if(abs(m_Far - value) < 2.0){
        emit nearHaveToChange(value);
    }
    else{
        m_Near = value;
        std::cout << "Near Value Changed "<< value<< "\n";
    }

}

void MyGLWidget::setAngle(int value)
{
    if (value != m_Angle)
        m_Angle = value;
    std::cout << "Angle Value "<< value<< "\n";
}

void MyGLWidget::setRotationA(int value)
{
    m_Rot_A = value;
    std::cout << "Rotation A Value Changed "<< value<< "\n";
}

void MyGLWidget::setRotationB(int value)
{
    if (value != m_Rot_B)
        m_Rot_B = value;
    std::cout << "Rotation B Value Changed "<< value<< "\n";
}

void MyGLWidget::setRotationC(int value)
{
    if (value != m_Rot_C)
        m_Rot_C = value;
     std::cout << "Rotation C Value Changed "<< value << "\n";
}

void MyGLWidget::setProjectionMode(){
    this->m_projectionmode = !m_projectionmode;
    if(m_projectionmode)
        std::cout << "Projection : Perspective" << "\n";
    else
        std::cout << "Projection : Orthogonal" << "\n";
}
void MyGLWidget::correctNear(){

    std::cout<<"Difference between parameters Far and Near are smaller than 2.0!" << std::endl;
    m_Near=m_Far+2;
    std::cout<<m_Near<< std::endl;
    std::cout<<m_Far<< std::endl;
    emit nearChanged(m_Near);
}

void MyGLWidget::correctFar(){

    std::cout<<"Difference between parameters Far and Near are smaller than 2.0!" << std::endl;
    m_Far=m_Near+2.0;
    std::cout<<m_Near<< std::endl;
    std::cout<<m_Far<< std::endl;
    emit farChanged(m_Far);
}

void MyGLWidget::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_W|| event->key() == Qt::Key_Up) {
        cameraPosition.setZ(cameraPosition.z()+0.2f);
        std::cout<< "X: "<< cameraPosition.x() << "Z: " << cameraPosition.z() << std::endl;
    }
    if (event->key() == Qt::Key_S|| event->key() == Qt::Key_Down) {
        cameraPosition.setZ(cameraPosition.z()-0.2f);
        std::cout<< "X: "<< cameraPosition.x() << "Z: " << cameraPosition.z() << std::endl;
    }
    if (event->key() == Qt::Key_A|| event->key() == Qt::Key_Left) {
        cameraPosition.setX(cameraPosition.x()+0.2f);
        std::cout<< "X: "<< cameraPosition.x() << "Z: " << cameraPosition.z() << std::endl;
    }
    if (event->key() == Qt::Key_D|| event->key() == Qt::Key_Right) {
        cameraPosition.setX(cameraPosition.x()-0.2f);
        std::cout<< "X: "<< cameraPosition.x() << "Z: " << cameraPosition.z()<< std::endl;
    }

}

void MyGLWidget::initializeGL() {
    // Set up the rendering context, load shaders and other resources, etc.:
    QOpenGLFunctions *f = QOpenGLContext::currentContext()->functions();
    f->glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

}
void MyGLWidget::resizeGL(int w, int h) {
    // Update projection matrix and other size related settings:

}

void MyGLWidget::paintGL(){
    // Draw the scene:
    QOpenGLFunctions *f = QOpenGLContext::currentContext()->functions();

}
