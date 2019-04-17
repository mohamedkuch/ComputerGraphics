#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myglwidget.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    // A, B , C Sliders
    connect(ui->rotation_A_Slider, &QSlider::valueChanged, ui->myOpenGLWidget, &MyGLWidget::setRotationA);
    connect(ui->rotation_B_Slider, &QSlider::valueChanged, ui->myOpenGLWidget, &MyGLWidget::setRotationB);
    connect(ui->rotation_C_Slider, &QSlider::valueChanged, ui->myOpenGLWidget, &MyGLWidget::setRotationC);

    // Projection Mode
    connect(ui->projection_Radio_Orth, &QRadioButton::toggled,
            ui->myOpenGLWidget, &MyGLWidget::setProjectionMode);

    // Far , Near
    connect(ui->near_Spinbox,&QDoubleSpinBox::valueChanged,ui->myOpenGLWidget, &MyGLWidget::setNear);
    connect(ui->myOpenGLWidget, &MyGLWidget::nearHaveToChange, ui->myOpenGLWidget, &MyGLWidget::correctNear);
    connect(ui->myOpenGLWidget, &MyGLWidget::nearChanged, ui->near_Spinbox, &QDoubleSpinBox::setValue);

    connect(ui->far_SpinBox,&QDoubleSpinBox::valueChanged,ui->myOpenGLWidget, &MyGLWidget::setFar);
    connect(ui->myOpenGLWidget, &MyGLWidget::farHaveToChange, ui->myOpenGLWidget, &MyGLWidget::correctFar);
    connect(ui->myOpenGLWidget, &MyGLWidget::farChanged, ui->far_SpinBox, &QDoubleSpinBox::setValue);

    // lambda Field of View
    connect( ui->fov_Slider, &QSlider::valueChanged, [=] (const int &newValue ) {
       ui->myOpenGLWidget->setFOV(newValue);
    });
    connect( ui->fov_Spinbox, &QSpinBox::valueChanged, [=] ( const int &newValue) {
       ui->myOpenGLWidget->setFOV(newValue);
    });

    // lambda Angle
    connect( ui->angle_Slider, &QSlider::valueChanged, [=] (const int &newValue ) {
       ui->myOpenGLWidget->setAngle(newValue);
    });
    connect( ui->angle_Spinbox, &QSpinBox::valueChanged, [=] ( const int &newValue) {
       ui->myOpenGLWidget->setAngle(newValue);
    });


}

MainWindow::~MainWindow()
{
    delete ui;
}
