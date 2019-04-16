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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QGroupBox *GroupControls;
    QGridLayout *gridLayout;
    QLabel *FieldOfView_Label;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QSlider *verticalSlider;
    QSpinBox *spinBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QLabel *label;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider_3;
    QSlider *horizontalSlider;
    QLabel *label_3;
    QSlider *verticalSlider_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLabel *label_6;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_4;
    QLabel *Angle_Label;
    QSpinBox *spinBox_2;
    QOpenGLWidget *openGLWidget;

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
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        GroupControls = new QGroupBox(centralWidget);
        GroupControls->setObjectName(QString::fromUtf8("GroupControls"));
        gridLayout = new QGridLayout(GroupControls);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        FieldOfView_Label = new QLabel(GroupControls);
        FieldOfView_Label->setObjectName(QString::fromUtf8("FieldOfView_Label"));
        FieldOfView_Label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(FieldOfView_Label, 2, 0, 1, 1);

        pushButton = new QPushButton(GroupControls);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 11, 0, 1, 2);

        groupBox = new QGroupBox(GroupControls);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);


        gridLayout->addWidget(groupBox, 7, 0, 1, 2);

        verticalSlider = new QSlider(GroupControls);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setMaximum(360);
        verticalSlider->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalSlider, 5, 1, 1, 1);

        spinBox = new QSpinBox(GroupControls);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(360);

        gridLayout->addWidget(spinBox, 3, 1, 1, 1);

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

        horizontalSlider_2 = new QSlider(groupBox_2);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_2, 2, 1, 1, 1);

        horizontalSlider_3 = new QSlider(groupBox_2);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_3, 4, 1, 1, 1);

        horizontalSlider = new QSlider(groupBox_2);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);


        gridLayout->addWidget(groupBox_2, 8, 0, 1, 2);

        verticalSlider_2 = new QSlider(GroupControls);
        verticalSlider_2->setObjectName(QString::fromUtf8("verticalSlider_2"));
        verticalSlider_2->setMinimum(45);
        verticalSlider_2->setMaximum(180);
        verticalSlider_2->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalSlider_2, 5, 0, 2, 1);

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

        gridLayout_2->addWidget(label_6, 3, 0, 1, 1);

        spinBox_3 = new QSpinBox(groupBox_3);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));

        gridLayout_2->addWidget(spinBox_3, 1, 1, 1, 1);

        spinBox_4 = new QSpinBox(groupBox_3);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));

        gridLayout_2->addWidget(spinBox_4, 3, 1, 1, 1);


        gridLayout->addWidget(groupBox_3, 10, 0, 1, 2);

        Angle_Label = new QLabel(GroupControls);
        Angle_Label->setObjectName(QString::fromUtf8("Angle_Label"));
        Angle_Label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Angle_Label, 2, 1, 1, 1);

        spinBox_2 = new QSpinBox(GroupControls);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMinimum(45);
        spinBox_2->setMaximum(180);

        gridLayout->addWidget(spinBox_2, 3, 0, 1, 1);


        formLayout->setWidget(0, QFormLayout::LabelRole, GroupControls);

        openGLWidget = new QOpenGLWidget(centralWidget);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(openGLWidget->sizePolicy().hasHeightForWidth());
        openGLWidget->setSizePolicy(sizePolicy1);
        openGLWidget->setMinimumSize(QSize(0, 480));

        formLayout->setWidget(0, QFormLayout::FieldRole, openGLWidget);


        horizontalLayout->addLayout(formLayout);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), verticalSlider, SLOT(setValue(int)));
        QObject::connect(verticalSlider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
        QObject::connect(spinBox_2, SIGNAL(valueChanged(int)), verticalSlider_2, SLOT(setValue(int)));
        QObject::connect(verticalSlider_2, SIGNAL(valueChanged(int)), spinBox_2, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        GroupControls->setTitle(QApplication::translate("MainWindow", "Controls", nullptr));
        FieldOfView_Label->setText(QApplication::translate("MainWindow", "Field of view", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Projection Mode", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "Perspective", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "Orthogonal", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Rotations", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Ring C", nullptr));
        label->setText(QApplication::translate("MainWindow", "Ring A", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Ring B", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Clipping Plane", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Near", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Far", nullptr));
        Angle_Label->setText(QApplication::translate("MainWindow", "Angle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
