#include "../include/wowview.h"
#include "../include/ui_mainWindow.h"
#include "../include/charData.h"

WoWView::WoWView(Ui::MainWindow* ui) {
  ui_instance = *ui;
  scn = new QGraphicsScene( ui_instance.avatarImage );
}

void WoWView::updateUI(QVariantMap mostRecent) {
  ui_instance.nameData->setText( mostRecent["name"].toString( ) );
  ui_instance.nameLabelLarge->setText( mostRecent["name"].toString( ));
  ui_instance.realmData->setText( mostRecent["realm"].toString( ) );
  ui_instance.levelData->setText( mostRecent["level"].toString( ));
  ui_instance.achData->setText( mostRecent["achievementPoints"].toString( ));

  switch (mostRecent["class"].toInt())
  {
    case 1:
      ui_instance.classData->setText("Warrior");
      ui_instance.classLabelLarge->setText( "Warrior" );
      break;

    case 2:
      ui_instance.classData->setText("Paladin");
      ui_instance.classLabelLarge->setText("Paladin");
      break;

    case 3:
      ui_instance.classData->setText("Hunter");
      ui_instance.classLabelLarge->setText( "Hunter" );
      break;

    case 4:
      ui_instance.classData->setText("Rogue");
      ui_instance.classLabelLarge->setText( "Rogue" );
      break;

    case 5:
      ui_instance.classData->setText("Priest");
      ui_instance.classLabelLarge->setText( "Priest" );
      break;

    case 6:
      ui_instance.classData->setText("Death Knight");
      ui_instance.classLabelLarge->setText( "Death Knight" );
      break;

    case 7:
      ui_instance.classData->setText("Shaman");
      ui_instance.classLabelLarge->setText( "Shaman" );
      break;

    case 8:
      ui_instance.classData->setText("Mage");
      ui_instance.classLabelLarge->setText( "Mage" );
      break;

    case 9:
      ui_instance.classData->setText("Warlock");
      ui_instance.classLabelLarge->setText( "Warlock" );
      break;

    case 11:
      ui_instance.classData->setText("Druid");
      ui_instance.classLabelLarge->setText( "Druid" );
      break;
  }

  switch (mostRecent["race"].toInt())
  {
    case 1:
      ui_instance.raceData->setText("Human");
      break;

    case 2:
      ui_instance.raceData->setText("Orc");
      break;

    case 3:
      ui_instance.raceData->setText("Dwarf");
      break;

    case 4:
      ui_instance.raceData->setText("Night Elf");
      break;

    case 5:
      ui_instance.raceData->setText("Undead");
      break;

    case 6:
      ui_instance.raceData->setText("Tauren");
      break;

    case 7:
      ui_instance.raceData->setText("Gnome");
      break;

    case 8:
      ui_instance.raceData->setText("Troll");
      break;

    case 9:
      ui_instance.raceData->setText("Goblin");
      break;

    case 10:
      ui_instance.raceData->setText("Blood Elf");
      break;

    case 11:
      ui_instance.raceData->setText("Draenei");
      break;

    case 22:
      ui_instance.raceData->setText("Worgen");
      break;

  }

  if(mostRecent["gender"] == 1) {
    ui_instance.genderData->setText("Female");
  } else {
    ui_instance.genderData->setText("Male");
  }
}

void WoWView::updateAvatar(QString filename) {
  QPixmap avatar( filename );
  ui_instance.avatarImage->setScene( scn );

  scn->addPixmap( avatar );

  qDebug("Avatar updated");
}

WoWView::~WoWView() {

}
