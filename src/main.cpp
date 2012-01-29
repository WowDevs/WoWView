#include <QApplication>
#include <QDialog>
#include "../include/charData.h"
#include "../include/mainWindow.h"
#include "../include/newChar_dialog.h"
#include <QVariant>
#include <QObject>
#include <QDebug>
#include <QTextCodec>

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);

  QMainWindow *widget = new QMainWindow;
  MainWindow ui(widget);
  ui.setupUi(widget);
  ui.defaultit();

  widget->show();

  return app.exec();
}
