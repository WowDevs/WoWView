#include <QApplication>
#include <QDialog>
#include "../include/charData.h"
#include "../include/ui_mainWindow.h"
#include "../include/ui_newChar.h"
#include "../include/wowview.h"
#include <QVariant>
#include <QObject>

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  QMainWindow *widget = new QMainWindow;
  Ui::MainWindow ui;
  ui.setupUi(widget);

  QDialog *newCharDialog = new QDialog;
  Ui::newDialog newChar_dialog;
  newChar_dialog.setupUi(newCharDialog);

  WoWView wowview(&ui);
  charData test( "Cosmicpand\xe1", "Karazhan" );

  QObject::connect(&ui, SIGNAL(actionNew()), &newChar_dialog, SLOT(show()));

  QObject::connect(&test, SIGNAL(newData(QVariantMap)), &wowview, SLOT(updateUI(QVariantMap) ));

  QObject::connect(&test, SIGNAL(newAvatar(QString)), &wowview, SLOT(updateAvatar(QString) ));

  test.fetchData();

  widget->show();

  return app.exec();
}