#include <QtGui>

#include "../include/mainWindow.h"
#include "../include/newChar_dialog.h"

newCharDialog::newCharDialog(QWidget *parent) : QDialog(parent) {
  setupUi(this);
  //connect(addButton,SIGNAL(clicked()),this,SLOT(addButton_clicked()));
}
