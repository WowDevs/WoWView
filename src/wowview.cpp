#include "../include/wowview.h"
#include "../include/ui_mainWindow.h"
#include "../include/charData.h"

WoWView::WoWView() {

}

void WoWView::updateUI(Ui_MainWindow &ui, charData &chardata) {
  QVariantMap mostRecent = chardata.getData();
  ui.nameData->setText( mostRecent["name"].toString( ) );
  ui.realmData->setText( mostRecent["realm"].toString( ) );
  ui.classData->setText( mostRecent["class"].toString( ) );
  ui.nameData->setText( "Received" );
}

WoWView::~WoWView() {

}
