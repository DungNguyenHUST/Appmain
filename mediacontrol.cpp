#include "mediacontrol.h"
#include "QLocale"

MediaControl::MediaControl()
{

}

void MediaControl::Play()
{
    QMediaPlaylist *playlist = new QMediaPlaylist;
    playlist->addMedia(QUrl::fromLocalFile("/Users/vandung1.nguyen/Desktop/QT project/Appmain/Kalimba.mp3"));
    playlist->setPlaybackMode(QMediaPlaylist::Loop);

    QMediaPlayer *music = new QMediaPlayer();
    music->setPlaylist(playlist);
    music->play();
    music->setVolume(50);
}
