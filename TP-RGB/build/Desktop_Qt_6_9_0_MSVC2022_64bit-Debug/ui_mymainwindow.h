/********************************************************************************
** Form generated from reading UI file 'mymainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMAINWINDOW_H
#define UI_MYMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyMainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSlider *verticalSlider;
    QSpinBox *spinBox;
    QVBoxLayout *verticalLayout_2;
    QSlider *verticalSlider_2;
    QSpinBox *spinBox_2;
    QVBoxLayout *verticalLayout_3;
    QSlider *verticalSlider_3;
    QSpinBox *spinBox_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MyMainWindow)
    {
        if (MyMainWindow->objectName().isEmpty())
            MyMainWindow->setObjectName("MyMainWindow");
        MyMainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MyMainWindow->sizePolicy().hasHeightForWidth());
        MyMainWindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(14);
        MyMainWindow->setFont(font);
        centralwidget = new QWidget(MyMainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(280, 180, 319, 281));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSlider = new QSlider(widget);
        verticalSlider->setObjectName("verticalSlider");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(verticalSlider->sizePolicy().hasHeightForWidth());
        verticalSlider->setSizePolicy(sizePolicy1);
        verticalSlider->setMaximum(255);
        verticalSlider->setOrientation(Qt::Orientation::Vertical);

        verticalLayout->addWidget(verticalSlider);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName("spinBox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy2);
        spinBox->setFont(font);
        spinBox->setMaximum(255);

        verticalLayout->addWidget(spinBox);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSlider_2 = new QSlider(widget);
        verticalSlider_2->setObjectName("verticalSlider_2");
        sizePolicy1.setHeightForWidth(verticalSlider_2->sizePolicy().hasHeightForWidth());
        verticalSlider_2->setSizePolicy(sizePolicy1);
        verticalSlider_2->setMaximum(255);
        verticalSlider_2->setOrientation(Qt::Orientation::Vertical);

        verticalLayout_2->addWidget(verticalSlider_2);

        spinBox_2 = new QSpinBox(widget);
        spinBox_2->setObjectName("spinBox_2");
        sizePolicy2.setHeightForWidth(spinBox_2->sizePolicy().hasHeightForWidth());
        spinBox_2->setSizePolicy(sizePolicy2);
        spinBox_2->setFont(font);
        spinBox_2->setMaximum(255);

        verticalLayout_2->addWidget(spinBox_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSlider_3 = new QSlider(widget);
        verticalSlider_3->setObjectName("verticalSlider_3");
        sizePolicy1.setHeightForWidth(verticalSlider_3->sizePolicy().hasHeightForWidth());
        verticalSlider_3->setSizePolicy(sizePolicy1);
        verticalSlider_3->setMaximum(255);
        verticalSlider_3->setOrientation(Qt::Orientation::Vertical);

        verticalLayout_3->addWidget(verticalSlider_3);

        spinBox_3 = new QSpinBox(widget);
        spinBox_3->setObjectName("spinBox_3");
        sizePolicy2.setHeightForWidth(spinBox_3->sizePolicy().hasHeightForWidth());
        spinBox_3->setSizePolicy(sizePolicy2);
        spinBox_3->setFont(font);
        spinBox_3->setMaximum(255);

        verticalLayout_3->addWidget(spinBox_3);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(18);
        label->setFont(font1);

        horizontalLayout_2->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);


        verticalLayout_4->addLayout(horizontalLayout_2);

        MyMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MyMainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MyMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MyMainWindow);
        statusbar->setObjectName("statusbar");
        MyMainWindow->setStatusBar(statusbar);

        retranslateUi(MyMainWindow);

        QMetaObject::connectSlotsByName(MyMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MyMainWindow)
    {
        MyMainWindow->setWindowTitle(QCoreApplication::translate("MyMainWindow", "MyMainWindow", nullptr));
        label->setText(QCoreApplication::translate("MyMainWindow", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("MyMainWindow", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("MyMainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyMainWindow: public Ui_MyMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAINWINDOW_H
