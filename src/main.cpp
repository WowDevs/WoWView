#include <QApplication>
#include "../include/charData.h"
#include "../include/ui_mainWindow.h"
#include "../include/wowview.h"
#include <QVariant>
#include <QObject>

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  QMainWindow *widget = new QMainWindow;
  Ui::MainWindow ui;
  ui.setupUi(widget);

  WoWView wowview;
  charData test( "Cosmicpand\xe1", "Karazhan" );

  QObject::connect(&test, SIGNAL(newData()), &wowview, SLOT(updateUI(ui, test ) ));

  test.fetchData();

  widget->show();

  return app.exec();
}