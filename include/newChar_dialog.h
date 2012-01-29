#ifndef NEWCHARDIALOG_H
#define NEWCHARDIALOG_H

#include <QDialog>
#include "ui_newChar_dialog.h"

class newCharDialog : public QDialog, public Ui::newDialog {
  Q_OBJECT

  public:
    newCharDialog(QWidget *parent=0);

  private slots:
};
#endif
