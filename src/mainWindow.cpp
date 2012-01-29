#include <QtGui>
#include <QDebug>

#include "../include/mainWindow.h"
#include "../include/newChar_dialog.h"
#include "../include/charData.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
  qDebug("+ Initialised mainWindow");
}

void MainWindow::defaultit() {
  QObject::connect(actionNew, SIGNAL(triggered(bool)), this, SLOT(on_actionNew_triggered()));
  codetext = QTextCodec::codecForLocale();
  
  QString char_name = codetext->toUnicode("CosmicPandá");
  character = new charData(char_name, "Karazhan");

  QObject::connect(character, SIGNAL(newData(QVariantMap)), this, SLOT(updateUI(QVariantMap) ));
  QObject::connect(character, SIGNAL(newAvatar(QString)), this, SLOT(updateAvatar(QString) ));
}

void MainWindow::on_actionNew_triggered() {
  dialog = new newCharDialog();
  QObject::connect(dialog->buttonBox, SIGNAL(accepted()), this, SLOT(on_newCharAccept_triggered()));
  dialog->show();
  qDebug("+ DIALOG CALLED");
}

void MainWindow::on_newCharAccept_triggered( ) {
  delete character;
  QString char_name = dialog->user_data->text();
  QString realm_name = dialog->realm_data->text(); 
  QString region = dialog->region_data->currentText();
  character = new charData(char_name, realm_name);
  QObject::connect(character, SIGNAL(newData(QVariantMap)), this, SLOT(updateUI(QVariantMap) ));
  QObject::connect(character, SIGNAL(newAvatar(QString)), this, SLOT(updateAvatar(QString) ));
  character->setRegion(region);
}

void MainWindow::updateUI(QVariantMap mostRecent) {
  nameData->setText( mostRecent["name"].toString( ) );
  nameLabelLarge->setText( mostRecent["name"].toString( ));
  realmData->setText( mostRecent["realm"].toString( ) );
  levelData->setText( mostRecent["level"].toString( ));
  achData->setText( mostRecent["achievementPoints"].toString( ));

  switch (mostRecent["class"].toInt())
  {
    case 1:
      classData->setText("Warrior");
      classLabelLarge->setText( "Warrior" );
      break;

    case 2:
      classData->setText("Paladin");
      classLabelLarge->setText("Paladin");
      break;

    case 3:
      classData->setText("Hunter");
      classLabelLarge->setText( "Hunter" );
      break;

    case 4:
      classData->setText("Rogue");
      classLabelLarge->setText( "Rogue" );
      break;

    case 5:
      classData->setText("Priest");
      classLabelLarge->setText( "Priest" );
      break;

    case 6:
      classData->setText("Death Knight");
      classLabelLarge->setText( "Death Knight" );
      break;

    case 7:
      classData->setText("Shaman");
      classLabelLarge->setText( "Shaman" );
      break;

    case 8:
      classData->setText("Mage");
      classLabelLarge->setText( "Mage" );
      break;

    case 9:
      classData->setText("Warlock");
      classLabelLarge->setText( "Warlock" );
      break;

    case 11:
      classData->setText("Druid");
      classLabelLarge->setText( "Druid" );
      break;
  }

  switch (mostRecent["race"].toInt())
  {
    case 1:
      raceData->setText("Human");
      break;

    case 2:
      raceData->setText("Orc");
      break;

    case 3:
      raceData->setText("Dwarf");
      break;

    case 4:
      raceData->setText("Night Elf");
      break;

    case 5:
      raceData->setText("Undead");
      break;

    case 6:
      raceData->setText("Tauren");
      break;

    case 7:
      raceData->setText("Gnome");
      break;

    case 8:
      raceData->setText("Troll");
      break;

    case 9:
      raceData->setText("Goblin");
      break;

    case 10:
      raceData->setText("Blood Elf");
      break;

    case 11:
      raceData->setText("Draenei");
      break;

    case 22:
      raceData->setText("Worgen");
      break;

  }

  if(mostRecent["gender"] == 1) {
    genderData->setText("Female");
  } else {
    genderData->setText("Male");
  }
}

void MainWindow::updateAvatar(QString filename) {
  QPixmap avatar( filename );
  scn = new QGraphicsScene( avatarImage );
  avatarImage->setScene( scn );

  scn->addPixmap( avatar );

  qDebug("+ Avatar updated");
}

MainWindow::~MainWindow() {

}
