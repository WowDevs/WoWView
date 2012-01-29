#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>
#include "ui_mainWindow.h"
#include "newChar_dialog.h"
#include "charData.h"

class MainWindow : public QMainWindow, public Ui::MainWindow {
  Q_OBJECT

  public:
    MainWindow(QWidget *parent=0);
    void defaultit();
    ~MainWindow();

  public slots:
    void updateUI(QVariantMap);
    void updateAvatar(QString);
    void on_actionNew_triggered();
    void on_newCharAccept_triggered();

  private:
    QTextCodec *codetext;
    QGraphicsScene *scn;
    charData *character;
    newCharDialog *dialog;
};
#endif
