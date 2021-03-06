/*
 * File:   charData.h
 * Author: CosmicPanda(D.Williams)
 *
 * Created on 01 January 2011, 00:00
 */

#ifndef _CHARDATA_H
#define _CHARDATA_H

#include <string>
#include <QtCore/QObject>
#include <QtCore/QVariant>
#include <QtCore/QString>
#include <QtCore/QDateTime>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>

class charData : public QObject
{
Q_OBJECT

  private:
    QString   charName;
    QString   realmName;
    QString   region;
    QDateTime lastModified;
    QVariantMap  fetchedData;
    QNetworkAccessManager* m_manager;
    QNetworkAccessManager* m_manager_avatar;

  public slots:
    void replyFinished(QNetworkReply*);
    void replyFinishedAvatar(QNetworkReply* pReply);

  signals:
    void newData(QVariantMap result);
    void newAvatar(QString filename);

  public:
    charData( QString newName, QString newRealm );
    QVariantMap parseJSON( QString json );
    QVariantMap getData( );
    bool     fetchData( );
    bool     fetchAvatar();
    bool     setChar  ( QString newName   );
    bool     setRealm ( QString newRealm  );
    bool     setRegion( QString newRegion );
    ~charData();
};

#endif
