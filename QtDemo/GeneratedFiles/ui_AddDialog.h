/********************************************************************************
** Form generated from reading UI file 'AddDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDIALOG_H
#define UI_ADDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddDialog
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *cityLabel;
    QComboBox *typeComboBox;
    QLineEdit *nameEdit;
    QLineEdit *emailEdit;
    QLabel *emailText;
    QLabel *nameText;
    QLabel *typeLabel;
    QLabel *showCityLabel;
    QTreeWidget *cityTree;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;

    void setupUi(QDialog *AddDialog)
    {
        if (AddDialog->objectName().isEmpty())
            AddDialog->setObjectName(QStringLiteral("AddDialog"));
        AddDialog->setWindowModality(Qt::WindowModal);
        AddDialog->resize(400, 300);
        gridLayout_3 = new QGridLayout(AddDialog);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        cityLabel = new QLabel(AddDialog);
        cityLabel->setObjectName(QStringLiteral("cityLabel"));

        gridLayout->addWidget(cityLabel, 3, 0, 1, 1);

        typeComboBox = new QComboBox(AddDialog);
        typeComboBox->setObjectName(QStringLiteral("typeComboBox"));

        gridLayout->addWidget(typeComboBox, 2, 2, 1, 1);

        nameEdit = new QLineEdit(AddDialog);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));

        gridLayout->addWidget(nameEdit, 0, 2, 1, 1);

        emailEdit = new QLineEdit(AddDialog);
        emailEdit->setObjectName(QStringLiteral("emailEdit"));

        gridLayout->addWidget(emailEdit, 1, 2, 1, 1);

        emailText = new QLabel(AddDialog);
        emailText->setObjectName(QStringLiteral("emailText"));

        gridLayout->addWidget(emailText, 1, 0, 1, 1);

        nameText = new QLabel(AddDialog);
        nameText->setObjectName(QStringLiteral("nameText"));

        gridLayout->addWidget(nameText, 0, 0, 1, 1);

        typeLabel = new QLabel(AddDialog);
        typeLabel->setObjectName(QStringLiteral("typeLabel"));

        gridLayout->addWidget(typeLabel, 2, 0, 1, 1);

        showCityLabel = new QLabel(AddDialog);
        showCityLabel->setObjectName(QStringLiteral("showCityLabel"));

        gridLayout->addWidget(showCityLabel, 3, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        cityTree = new QTreeWidget(AddDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        cityTree->setHeaderItem(__qtreewidgetitem);
        cityTree->setObjectName(QStringLiteral("cityTree"));

        verticalLayout->addWidget(cityTree);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(AddDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        horizontalLayout->addWidget(okButton);


        gridLayout_2->addLayout(horizontalLayout, 6, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(AddDialog);
        QObject::connect(okButton, SIGNAL(clicked()), AddDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(AddDialog);
    } // setupUi

    void retranslateUi(QDialog *AddDialog)
    {
        AddDialog->setWindowTitle(QApplication::translate("AddDialog", "AddDialog", Q_NULLPTR));
        cityLabel->setText(QApplication::translate("AddDialog", "City", Q_NULLPTR));
        typeComboBox->clear();
        typeComboBox->insertItems(0, QStringList()
         << QApplication::translate("AddDialog", "1F", Q_NULLPTR)
         << QApplication::translate("AddDialog", "2F", Q_NULLPTR)
         << QApplication::translate("AddDialog", "3F", Q_NULLPTR)
        );
        emailText->setText(QApplication::translate("AddDialog", "Email:", Q_NULLPTR));
        nameText->setText(QApplication::translate("AddDialog", "Name:", Q_NULLPTR));
        typeLabel->setText(QApplication::translate("AddDialog", "Type", Q_NULLPTR));
        showCityLabel->setText(QString());
        okButton->setText(QApplication::translate("AddDialog", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddDialog: public Ui_AddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDIALOG_H
