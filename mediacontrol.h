#ifndef MEDIAPLAYER_H
#define MEDIAPLAYER_H

#include <QObject>
#include <QtMultimedia/QMediaPlayer>
#include <QtMultimedia/QSound>
#include <QtMultimedia/QMediaPlaylist>

class MediaControl:public QObject
{
    Q_OBJECT
public:
    MediaControl();
      void Play();
};

#endif // MEDIAPLAYER_H
