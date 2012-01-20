/********************************************************************************
** Form generated from reading UI file 'newChar_dialog.ui'
**
** Created: Fri Jan 20 00:01:56 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef NEWCHAR_DIALOG_H
#define NEWCHAR_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *userLabel;
    QLabel *realmLabel;
    QLabel *regionLabel;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *userData;
    QLineEdit *realmData;
    QComboBox *regionData;

    void setupUi(QDialog *newDialog)
    {
        if (newDialog->objectName().isEmpty())
            newDialog->setObjectName(QString::fromUtf8("newDialog"));
        newDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(newDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 261, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        verticalLayoutWidget = new QWidget(newDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 30, 121, 171));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        userLabel = new QLabel(verticalLayoutWidget);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));

        verticalLayout->addWidget(userLabel);

        realmLabel = new QLabel(verticalLayoutWidget);
        realmLabel->setObjectName(QString::fromUtf8("realmLabel"));

        verticalLayout->addWidget(realmLabel);

        regionLabel = new QLabel(verticalLayoutWidget);
        regionLabel->setObjectName(QString::fromUtf8("regionLabel"));

        verticalLayout->addWidget(regionLabel);

        verticalLayoutWidget_2 = new QWidget(newDialog);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(150, 10, 241, 211));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        userData = new QLineEdit(verticalLayoutWidget_2);
        userData->setObjectName(QString::fromUtf8("userData"));

        verticalLayout_2->addWidget(userData);

        realmData = new QLineEdit(verticalLayoutWidget_2);
        realmData->setObjectName(QString::fromUtf8("realmData"));

        verticalLayout_2->addWidget(realmData);

        regionData = new QComboBox(verticalLayoutWidget_2);
        regionData->setObjectName(QString::fromUtf8("regionData"));

        verticalLayout_2->addWidget(regionData);


        retranslateUi(newDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), newDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), newDialog, SLOT(reject()));

        regionData->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(newDialog);
    } // setupUi

    void retranslateUi(QDialog *newDialog)
    {
        newDialog->setWindowTitle(QApplication::translate("newDialog", "New Character", 0, QApplication::UnicodeUTF8));
        userLabel->setText(QApplication::translate("newDialog", "Username: ", 0, QApplication::UnicodeUTF8));
        realmLabel->setText(QApplication::translate("newDialog", "Realm: ", 0, QApplication::UnicodeUTF8));
        regionLabel->setText(QApplication::translate("newDialog", "Region: ", 0, QApplication::UnicodeUTF8));
        regionData->clear();
        regionData->insertItems(0, QStringList()
         << QApplication::translate("newDialog", "EU", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("newDialog", "US", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class newDialog: public Ui_newDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // NEWCHAR_DIALOG_H
/********************************************************************************
** Form generated from reading UI file 'newChar_dialog.ui'
**
** Created: Fri Jan 20 00:15:17 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef NEWCHAR_DIALOG_H
#define NEWCHAR_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *userLabel;
    QLabel *realmLabel;
    QLabel *regionLabel;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *userData;
    QLineEdit *realmData;
    QComboBox *regionData;

    void setupUi(QDialog *newDialog)
    {
        if (newDialog->objectName().isEmpty())
            newDialog->setObjectName(QString::fromUtf8("newDialog"));
        newDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(newDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 261, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        verticalLayoutWidget = new QWidget(newDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 30, 121, 171));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        userLabel = new QLabel(verticalLayoutWidget);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));

        verticalLayout->addWidget(userLabel);

        realmLabel = new QLabel(verticalLayoutWidget);
        realmLabel->setObjectName(QString::fromUtf8("realmLabel"));

        verticalLayout->addWidget(realmLabel);

        regionLabel = new QLabel(verticalLayoutWidget);
        regionLabel->setObjectName(QString::fromUtf8("regionLabel"));

        verticalLayout->addWidget(regionLabel);

        verticalLayoutWidget_2 = new QWidget(newDialog);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(150, 10, 241, 211));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        userData = new QLineEdit(verticalLayoutWidget_2);
        userData->setObjectName(QString::fromUtf8("userData"));

        verticalLayout_2->addWidget(userData);

        realmData = new QLineEdit(verticalLayoutWidget_2);
        realmData->setObjectName(QString::fromUtf8("realmData"));

        verticalLayout_2->addWidget(realmData);

        regionData = new QComboBox(verticalLayoutWidget_2);
        regionData->setObjectName(QString::fromUtf8("regionData"));

        verticalLayout_2->addWidget(regionData);


        retranslateUi(newDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), newDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), newDialog, SLOT(reject()));

        regionData->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(newDialog);
    } // setupUi

    void retranslateUi(QDialog *newDialog)
    {
        newDialog->setWindowTitle(QApplication::translate("newDialog", "New Character", 0, QApplication::UnicodeUTF8));
        userLabel->setText(QApplication::translate("newDialog", "Username: ", 0, QApplication::UnicodeUTF8));
        realmLabel->setText(QApplication::translate("newDialog", "Realm: ", 0, QApplication::UnicodeUTF8));
        regionLabel->setText(QApplication::translate("newDialog", "Region: ", 0, QApplication::UnicodeUTF8));
        regionData->clear();
        regionData->insertItems(0, QStringList()
         << QApplication::translate("newDialog", "EU", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("newDialog", "US", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class newDialog: public Ui_newDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // NEWCHAR_DIALOG_H
/********************************************************************************
** Form generated from reading UI file 'newChar_dialog.ui'
**
** Created: Fri Jan 20 00:28:35 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef NEWCHAR_DIALOG_H
#define NEWCHAR_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *userLabel;
    QLabel *realmLabel;
    QLabel *regionLabel;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *userData;
    QLineEdit *realmData;
    QComboBox *regionData;

    void setupUi(QDialog *newDialog)
    {
        if (newDialog->objectName().isEmpty())
            newDialog->setObjectName(QString::fromUtf8("newDialog"));
        newDialog->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(newDialog->sizePolicy().hasHeightForWidth());
        newDialog->setSizePolicy(sizePolicy);
        newDialog->setMinimumSize(QSize(400, 300));
        newDialog->setMaximumSize(QSize(400, 300));
        buttonBox = new QDialogButtonBox(newDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 261, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        verticalLayoutWidget = new QWidget(newDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 30, 121, 171));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        userLabel = new QLabel(verticalLayoutWidget);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));

        verticalLayout->addWidget(userLabel);

        realmLabel = new QLabel(verticalLayoutWidget);
        realmLabel->setObjectName(QString::fromUtf8("realmLabel"));

        verticalLayout->addWidget(realmLabel);

        regionLabel = new QLabel(verticalLayoutWidget);
        regionLabel->setObjectName(QString::fromUtf8("regionLabel"));

        verticalLayout->addWidget(regionLabel);

        verticalLayoutWidget_2 = new QWidget(newDialog);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(150, 10, 241, 211));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        userData = new QLineEdit(verticalLayoutWidget_2);
        userData->setObjectName(QString::fromUtf8("userData"));

        verticalLayout_2->addWidget(userData);

        realmData = new QLineEdit(verticalLayoutWidget_2);
        realmData->setObjectName(QString::fromUtf8("realmData"));

        verticalLayout_2->addWidget(realmData);

        regionData = new QComboBox(verticalLayoutWidget_2);
        regionData->setObjectName(QString::fromUtf8("regionData"));

        verticalLayout_2->addWidget(regionData);

#ifndef QT_NO_SHORTCUT
        realmLabel->setBuddy(realmLabel);
#endif // QT_NO_SHORTCUT

        retranslateUi(newDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), newDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), newDialog, SLOT(reject()));

        regionData->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(newDialog);
    } // setupUi

    void retranslateUi(QDialog *newDialog)
    {
        newDialog->setWindowTitle(QApplication::translate("newDialog", "New Character", 0, QApplication::UnicodeUTF8));
        userLabel->setText(QApplication::translate("newDialog", "Username: ", 0, QApplication::UnicodeUTF8));
        realmLabel->setText(QApplication::translate("newDialog", "Realm: ", 0, QApplication::UnicodeUTF8));
        regionLabel->setText(QApplication::translate("newDialog", "Region: ", 0, QApplication::UnicodeUTF8));
        regionData->clear();
        regionData->insertItems(0, QStringList()
         << QApplication::translate("newDialog", "EU", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("newDialog", "US", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class newDialog: public Ui_newDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // NEWCHAR_DIALOG_H
