#include <QObject>
#include "../include/ui_mainWindow.h"
#include "../include/charData.h"

class WoWView : public QObject
{
  Q_OBJECT

  public:
    WoWView(Ui::MainWindow* ui);
    QGraphicsScene *scn;
    ~WoWView();

  public slots:
    void updateUI(QVariantMap);
    void updateAvatar(QString);

  private:
    Ui_MainWindow ui_instance;
 };

