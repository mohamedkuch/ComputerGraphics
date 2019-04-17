/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "myglwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *GroupControls;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *projection_Radio_Persp;
    QRadioButton *projection_Radio_Orth;
    QSpinBox *angle_Spinbox;
    QSpinBox *fov_Spinbox;
    QPushButton *pushButton;
    QSlider *angle_Slider;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLabel *label;
    QSlider *rotation_B_Slider;
    QSlider *rotation_C_Slider;
    QSlider *rotation_A_Slider;
    QLabel *label_3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLabel *label_6;
    QDoubleSpinBox *near_Spinbox;
    QDoubleSpinBox *far_SpinBox;
    QLabel *FieldOfView_Label;
    QLabel *Angle_Label;
    QSlider *fov_Slider;
    MyGLWidget *myOpenGLWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(680, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        GroupControls = new QGroupBox(centralWidget);
        GroupControls->setObjectName(QString::fromUtf8("GroupControls"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(GroupControls->sizePolicy().hasHeightForWidth());
        GroupControls->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(GroupControls);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(GroupControls);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        projection_Radio_Persp = new QRadioButton(groupBox);
        projection_Radio_Persp->setObjectName(QString::fromUtf8("projection_Radio_Persp"));
        projection_Radio_Persp->setChecked(true);

        verticalLayout->addWidget(projection_Radio_Persp);

        projection_Radio_Orth = new QRadioButton(groupBox);
        projection_Radio_Orth->setObjectName(QString::fromUtf8("projection_Radio_Orth"));

        verticalLayout->addWidget(projection_Radio_Orth);


        gridLayout->addWidget(groupBox, 7, 0, 1, 2);

        angle_Spinbox = new QSpinBox(GroupControls);
        angle_Spinbox->setObjectName(QString::fromUtf8("angle_Spinbox"));
        angle_Spinbox->setMaximum(360);

        gridLayout->addWidget(angle_Spinbox, 3, 1, 1, 1);

        fov_Spinbox = new QSpinBox(GroupControls);
        fov_Spinbox->setObjectName(QString::fromUtf8("fov_Spinbox"));
        fov_Spinbox->setMinimum(45);
        fov_Spinbox->setMaximum(180);

        gridLayout->addWidget(fov_Spinbox, 3, 0, 1, 1);

        pushButton = new QPushButton(GroupControls);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 11, 0, 1, 2);

        angle_Slider = new QSlider(GroupControls);
        angle_Slider->setObjectName(QString::fromUtf8("angle_Slider"));
        angle_Slider->setMaximum(360);
        angle_Slider->setOrientation(Qt::Vertical);

        gridLayout->addWidget(angle_Slider, 6, 1, 1, 1);

        groupBox_2 = new QGroupBox(GroupControls);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 4, 0, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        rotation_B_Slider = new QSlider(groupBox_2);
        rotation_B_Slider->setObjectName(QString::fromUtf8("rotation_B_Slider"));
        rotation_B_Slider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(rotation_B_Slider, 2, 1, 1, 1);

        rotation_C_Slider = new QSlider(groupBox_2);
        rotation_C_Slider->setObjectName(QString::fromUtf8("rotation_C_Slider"));
        rotation_C_Slider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(rotation_C_Slider, 4, 1, 1, 1);

        rotation_A_Slider = new QSlider(groupBox_2);
        rotation_A_Slider->setObjectName(QString::fromUtf8("rotation_A_Slider"));
        rotation_A_Slider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(rotation_A_Slider, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 8, 0, 1, 2);

        groupBox_3 = new QGroupBox(GroupControls);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 4, 0, 1, 1);

        near_Spinbox = new QDoubleSpinBox(groupBox_3);
        near_Spinbox->setObjectName(QString::fromUtf8("near_Spinbox"));
        near_Spinbox->setValue(0.000000000000000);

        gridLayout_2->addWidget(near_Spinbox, 1, 1, 1, 1);

        far_SpinBox = new QDoubleSpinBox(groupBox_3);
        far_SpinBox->setObjectName(QString::fromUtf8("far_SpinBox"));
        far_SpinBox->setValue(2.000000000000000);

        gridLayout_2->addWidget(far_SpinBox, 4, 1, 1, 1);


        gridLayout->addWidget(groupBox_3, 10, 0, 1, 2);

        FieldOfView_Label = new QLabel(GroupControls);
        FieldOfView_Label->setObjectName(QString::fromUtf8("FieldOfView_Label"));
        FieldOfView_Label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(FieldOfView_Label, 2, 0, 1, 1);

        Angle_Label = new QLabel(GroupControls);
        Angle_Label->setObjectName(QString::fromUtf8("Angle_Label"));
        Angle_Label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Angle_Label, 2, 1, 1, 1);

        fov_Slider = new QSlider(GroupControls);
        fov_Slider->setObjectName(QString::fromUtf8("fov_Slider"));
        fov_Slider->setMinimum(45);
        fov_Slider->setMaximum(180);
        fov_Slider->setOrientation(Qt::Vertical);

        gridLayout->addWidget(fov_Slider, 5, 0, 2, 1);


        horizontalLayout_2->addWidget(GroupControls);

        myOpenGLWidget = new MyGLWidget(centralWidget);
        myOpenGLWidget->setObjectName(QString::fromUtf8("myOpenGLWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(myOpenGLWidget->sizePolicy().hasHeightForWidth());
        myOpenGLWidget->setSizePolicy(sizePolicy2);
        myOpenGLWidget->setMinimumSize(QSize(480, 0));

        horizontalLayout_2->addWidget(myOpenGLWidget);


        horizontalLayout->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(angle_Spinbox, SIGNAL(valueChanged(int)), angle_Slider, SLOT(setValue(int)));
        QObject::connect(angle_Slider, SIGNAL(valueChanged(int)), angle_Spinbox, SLOT(setValue(int)));
        QObject::connect(fov_Spinbox, SIGNAL(valueChanged(int)), fov_Slider, SLOT(setValue(int)));
        QObject::connect(fov_Slider, SIGNAL(valueChanged(int)), fov_Spinbox, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        GroupControls->setTitle(QApplication::translate("MainWindow", "Controls", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Projection Mode", nullptr));
        projection_Radio_Persp->setText(QApplication::translate("MainWindow", "Perspective", nullptr));
        projection_Radio_Orth->setText(QApplication::translate("MainWindow", "Orthogonal", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Rotations", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Ring C", nullptr));
        label->setText(QApplication::translate("MainWindow", "Ring A", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Ring B", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Clipping Plane", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Near", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Far", nullptr));
        FieldOfView_Label->setText(QApplication::translate("MainWindow", "Field of view", nullptr));
        Angle_Label->setText(QApplication::translate("MainWindow", "Angle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
