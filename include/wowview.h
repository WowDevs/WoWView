 #include <QObject>
 #include "../include/ui_mainWindow.h"
#include "../include/charData.h"

class WoWView : public QObject
{
  Q_OBJECT

 public:
     WoWView();
     ~WoWView();

 public slots:
   void updateUI(Ui_MainWindow &ui, charData &chardata);

 };

