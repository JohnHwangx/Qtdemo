/********************************************************************************
** Form generated from reading UI file 'QtDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDEMO_H
#define UI_QTDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtDemoClass
{
public:
    QAction *actionbutton1;
    QAction *actionbutton2;
    QAction *actionbutton3;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QSpacerItem *verticalSpacer;
    QListWidget *addressList;
    QLabel *nameLabel;
    QLabel *emailLabel;
    QLabel *typeLabel;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtDemoClass)
    {
        if (QtDemoClass->objectName().isEmpty())
            QtDemoClass->setObjectName(QStringLiteral("QtDemoClass"));
        QtDemoClass->resize(600, 400);
        actionbutton1 = new QAction(QtDemoClass);
        actionbutton1->setObjectName(QStringLiteral("actionbutton1"));
        actionbutton2 = new QAction(QtDemoClass);
        actionbutton2->setObjectName(QStringLiteral("actionbutton2"));
        actionbutton3 = new QAction(QtDemoClass);
        actionbutton3->setObjectName(QStringLiteral("actionbutton3"));
        centralWidget = new QWidget(QtDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        addButton = new QPushButton(centralWidget);
        addButton->setObjectName(QStringLiteral("addButton"));
        QFont font;
        font.setPointSize(13);
        addButton->setFont(font);

        verticalLayout->addWidget(addButton);

        deleteButton = new QPushButton(centralWidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setFont(font);

        verticalLayout->addWidget(deleteButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        addressList = new QListWidget(centralWidget);
        addressList->setObjectName(QStringLiteral("addressList"));
        addressList->setMouseTracking(false);
        addressList->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout->addWidget(addressList, 0, 0, 1, 1);

        nameLabel = new QLabel(centralWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        gridLayout->addWidget(nameLabel, 1, 0, 1, 2);

        emailLabel = new QLabel(centralWidget);
        emailLabel->setObjectName(QStringLiteral("emailLabel"));

        gridLayout->addWidget(emailLabel, 2, 0, 1, 2);

        typeLabel = new QLabel(centralWidget);
        typeLabel->setObjectName(QStringLiteral("typeLabel"));

        gridLayout->addWidget(typeLabel, 3, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        QtDemoClass->setCentralWidget(centralWidget);
        toolBar = new QToolBar(QtDemoClass);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        QtDemoClass->addToolBar(Qt::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(QtDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtDemoClass->setStatusBar(statusBar);

        toolBar->addAction(actionbutton1);
        toolBar->addAction(actionbutton2);
        toolBar->addAction(actionbutton3);

        retranslateUi(QtDemoClass);

        QMetaObject::connectSlotsByName(QtDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtDemoClass)
    {
        QtDemoClass->setWindowTitle(QApplication::translate("QtDemoClass", "QtDemo", Q_NULLPTR));
        actionbutton1->setText(QApplication::translate("QtDemoClass", "button1", Q_NULLPTR));
        actionbutton2->setText(QApplication::translate("QtDemoClass", "button2", Q_NULLPTR));
        actionbutton3->setText(QApplication::translate("QtDemoClass", "button3", Q_NULLPTR));
        addButton->setText(QApplication::translate("QtDemoClass", "Add", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("QtDemoClass", "Delete", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("QtDemoClass", "<No item selected>", Q_NULLPTR));
        emailLabel->setText(QString());
        typeLabel->setText(QString());
        toolBar->setWindowTitle(QApplication::translate("QtDemoClass", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtDemoClass: public Ui_QtDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDEMO_H
