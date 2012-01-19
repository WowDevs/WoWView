/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created: Wed Jan 18 22:21:07 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionExport;
    QAction *actionQuit;
    QAction *actionAbout;
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QGraphicsView *avatarImage;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *nameLabel;
    QLabel *realmLabel;
    QLabel *classLabel;
    QLabel *raceLabel;
    QLabel *genderLabel;
    QLabel *levelLabel;
    QLabel *achLabel;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *nameData;
    QLabel *realmData;
    QLabel *classData;
    QLabel *raceData;
    QLabel *genderData;
    QLabel *levelData;
    QLabel *achData;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *nameLabelLarge;
    QLabel *classLabelLarge;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        MainWindow->setUnifiedTitleAndToolBarOnMac(true);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 201, 161));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        avatarImage = new QGraphicsView(gridLayoutWidget);
        avatarImage->setObjectName(QString::fromUtf8("avatarImage"));
        sizePolicy.setHeightForWidth(avatarImage->sizePolicy().hasHeightForWidth());
        avatarImage->setSizePolicy(sizePolicy);
        avatarImage->setMinimumSize(QSize(92, 92));
        avatarImage->setMaximumSize(QSize(92, 92));
        avatarImage->setInteractive(false);

        gridLayout->addWidget(avatarImage, 0, 0, 1, 1);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 180, 171, 321));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(verticalLayoutWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        verticalLayout->addWidget(nameLabel);

        realmLabel = new QLabel(verticalLayoutWidget);
        realmLabel->setObjectName(QString::fromUtf8("realmLabel"));

        verticalLayout->addWidget(realmLabel);

        classLabel = new QLabel(verticalLayoutWidget);
        classLabel->setObjectName(QString::fromUtf8("classLabel"));

        verticalLayout->addWidget(classLabel);

        raceLabel = new QLabel(verticalLayoutWidget);
        raceLabel->setObjectName(QString::fromUtf8("raceLabel"));

        verticalLayout->addWidget(raceLabel);

        genderLabel = new QLabel(verticalLayoutWidget);
        genderLabel->setObjectName(QString::fromUtf8("genderLabel"));

        verticalLayout->addWidget(genderLabel);

        levelLabel = new QLabel(verticalLayoutWidget);
        levelLabel->setObjectName(QString::fromUtf8("levelLabel"));

        verticalLayout->addWidget(levelLabel);

        achLabel = new QLabel(verticalLayoutWidget);
        achLabel->setObjectName(QString::fromUtf8("achLabel"));

        verticalLayout->addWidget(achLabel);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(189, 180, 601, 321));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        nameData = new QLabel(verticalLayoutWidget_2);
        nameData->setObjectName(QString::fromUtf8("nameData"));

        verticalLayout_2->addWidget(nameData);

        realmData = new QLabel(verticalLayoutWidget_2);
        realmData->setObjectName(QString::fromUtf8("realmData"));

        verticalLayout_2->addWidget(realmData);

        classData = new QLabel(verticalLayoutWidget_2);
        classData->setObjectName(QString::fromUtf8("classData"));

        verticalLayout_2->addWidget(classData);

        raceData = new QLabel(verticalLayoutWidget_2);
        raceData->setObjectName(QString::fromUtf8("raceData"));

        verticalLayout_2->addWidget(raceData);

        genderData = new QLabel(verticalLayoutWidget_2);
        genderData->setObjectName(QString::fromUtf8("genderData"));

        verticalLayout_2->addWidget(genderData);

        levelData = new QLabel(verticalLayoutWidget_2);
        levelData->setObjectName(QString::fromUtf8("levelData"));

        verticalLayout_2->addWidget(levelData);

        achData = new QLabel(verticalLayoutWidget_2);
        achData->setObjectName(QString::fromUtf8("achData"));

        verticalLayout_2->addWidget(achData);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(220, 10, 571, 161));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        nameLabelLarge = new QLabel(verticalLayoutWidget_3);
        nameLabelLarge->setObjectName(QString::fromUtf8("nameLabelLarge"));
        nameLabelLarge->setFrameShadow(QFrame::Raised);
        nameLabelLarge->setScaledContents(true);
        nameLabelLarge->setIndent(15);
        nameLabelLarge->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_3->addWidget(nameLabelLarge);

        classLabelLarge = new QLabel(verticalLayoutWidget_3);
        classLabelLarge->setObjectName(QString::fromUtf8("classLabelLarge"));
        classLabelLarge->setTextFormat(Qt::PlainText);
        classLabelLarge->setScaledContents(true);
        classLabelLarge->setIndent(15);
        classLabelLarge->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_3->addWidget(classLabelLarge);

        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(10, 510, 781, 41));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addSeparator();
        menuFile->addAction(actionExport);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "WoWView", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("MainWindow", "New", 0, QApplication::UnicodeUTF8));
        actionExport->setText(QApplication::translate("MainWindow", "Export", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QApplication::translate("MainWindow", "Name", 0, QApplication::UnicodeUTF8));
        realmLabel->setText(QApplication::translate("MainWindow", "Realm", 0, QApplication::UnicodeUTF8));
        classLabel->setText(QApplication::translate("MainWindow", "Class", 0, QApplication::UnicodeUTF8));
        raceLabel->setText(QApplication::translate("MainWindow", "Race", 0, QApplication::UnicodeUTF8));
        genderLabel->setText(QApplication::translate("MainWindow", "Gender", 0, QApplication::UnicodeUTF8));
        levelLabel->setText(QApplication::translate("MainWindow", "Level", 0, QApplication::UnicodeUTF8));
        achLabel->setText(QApplication::translate("MainWindow", "Achievements", 0, QApplication::UnicodeUTF8));
        nameData->setText(QApplication::translate("MainWindow", "Unknown", 0, QApplication::UnicodeUTF8));
        realmData->setText(QApplication::translate("MainWindow", "Unknown", 0, QApplication::UnicodeUTF8));
        classData->setText(QApplication::translate("MainWindow", "Unknown", 0, QApplication::UnicodeUTF8));
        raceData->setText(QApplication::translate("MainWindow", "Unknown", 0, QApplication::UnicodeUTF8));
        genderData->setText(QApplication::translate("MainWindow", "Unknown", 0, QApplication::UnicodeUTF8));
        levelData->setText(QApplication::translate("MainWindow", "Unknown", 0, QApplication::UnicodeUTF8));
        achData->setText(QApplication::translate("MainWindow", "Unknown", 0, QApplication::UnicodeUTF8));
        nameLabelLarge->setText(QApplication::translate("MainWindow", "Unknown", 0, QApplication::UnicodeUTF8));
        classLabelLarge->setText(QApplication::translate("MainWindow", "Unknown", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINWINDOW_H
