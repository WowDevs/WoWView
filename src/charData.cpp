/*
 * File:   charData.pp
 * Author: CosmicPanda(D.Williams)
 *
 * Created on 01 January 2011, 00:00
 */

#include <QtCore/QVariant>
#include <QtCore/QString>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkAccessManager>
#include <QtCore/QStringBuilder>
#include <QtCore/QtDebug>
#include <QFile>
#include <QImage>
#include <QTextStream>
#include "../include/charData.h"
#include "../lib/qt-json/json.h"

charData::charData( QString newName, QString newRealm ) {
  m_manager = new QNetworkAccessManager(this);

  connect(m_manager, SIGNAL(finished(QNetworkReply*)),
       this, SLOT(replyFinished(QNetworkReply*)));

  m_manager_avatar = new QNetworkAccessManager(this);

  connect(m_manager_avatar, SIGNAL(finished(QNetworkReply*)),
          this, SLOT(replyFinishedAvatar(QNetworkReply*)));

  setChar( newName );
  setRealm( newRealm );
  setRegion( "eu" );
  qDebug("+ Initialised charData");
}

QVariantMap charData::parseJSON( QString json ) {
  bool ok;
  QVariantMap result = QtJson::Json::parse(json, ok).toMap();

  if(!ok) {
    qFatal("An error occurred during parsing");
    exit(1);
  }

  qDebug() << "Name:  \t" << result["name"].toString();
  qDebug() << "Realm: \t" << result["realm"].toString();
  qDebug() << "Class: \t" << result["class"].toString();
  qDebug() << "Race:  \t" << result["race"].toString();
  qDebug() << "Gender:\t" << result["gender"].toString();
  qDebug() << "Level: \t" << result["level"].toString();
  qDebug() << "Achie: \t" << result["achievementPoints"].toString();
  qDebug() << "Thumb: \t" << result["thumbnail"].toString();

  charName  = result["name"].toString();
  realmName = result["realm"].toString();
  lastModified = QDateTime::currentDateTime();
  fetchedData = result;

  emit newData(result);
  fetchAvatar();

  return result;
}

bool charData::fetchData( ) {
  QString url = QString("http://") % region % QString(".battle.net/api/wow/character/") % realmName % QString("/") % charName;
  m_manager->get(QNetworkRequest(QUrl(url)));
  qDebug() << "+ Initialised with URL of: " << url;
  return TRUE;
}

bool charData::fetchAvatar( ) {
  QString url = QString("http://") % region % QString(".battle.net/static-render/") % region % QString("/") % fetchedData["thumbnail"].toString();
  m_manager_avatar->get(QNetworkRequest(QUrl(url)));
  qDebug() << "+ Initialised Avatar fetch with URL of: " << url;
  return TRUE;
}

bool charData::setChar( QString newName ) {
  // Need to place Verification here, no checks for Alpha
  charName = newName;
  qDebug("+ Managed to set the Character");
  return TRUE;
}

bool charData::setRealm( QString newRealm ) {
  // Same as setChar
  realmName = newRealm;
  qDebug("+ Managed to set the Realm");
  return TRUE;
}

bool charData::setRegion( QString newRegion ) {
  // Same as setChar
  region = newRegion;
  qDebug("+ Managed to set the Region");
  return TRUE;
}

void charData::replyFinished(QNetworkReply* pReply) {
  QByteArray data=pReply->readAll();
  QString str(data);
  qDebug("+ Finished download, parsing; ");
  parseJSON(str);
}

void charData::replyFinishedAvatar(QNetworkReply* pReply) {
  QString filename = QString("/tmp/current_avatar.") % fetchedData["lastModified"].toString() % QString(".jpg");
  QImage* avatar = new QImage();
  avatar->loadFromData(pReply->readAll());

  if(avatar->isNull())
    qDebug("- ERROR: MALFORMED IMAGE");
  else
    avatar->save(filename);

  qDebug("+ Finished Avatar download, saved.");
  emit newAvatar(filename);
}

QVariantMap charData::getData( ) {
  return fetchedData;
}

charData::~charData( ) {
  delete this;
}

