#include "musicplayer.h"
#include <QDir>
#include <QMediaPlaylist>

MusicPlayer::MusicPlayer(QWidget *parent) : QWidget(parent)
{
    player = new QMediaPlayer(this);
    playlist = new QMediaPlaylist();
    player ->setPlaylist (playlist);
}

void MusicPlayer::play()
{
    player->play();
}
void MusicPlayer::stop ()
{
    player->stop ();
}
void MusicPlayer::next ()
{
    qDebug()<<"next";
    playlist ->next ();
}

void MusicPlayer::pause()
{
    player->pause ();
}
void MusicPlayer::add ()

{
    qDebug()<<"add";
    QDir directory("C:/Users/Public/Music/Sample Music");
    if (!directory.exists ())
         qWarning("Cannot find the example directory");
    directory.setFilter(QDir::Files | QDir::Hidden | QDir::NoSymLinks);
    directory.setSorting(QDir::Size | QDir::Reversed);
    QFileInfoList list = directory.entryInfoList();
       for (int i = 0; i < list.size(); ++i)
       {
           QFileInfo fileInfo = list.at(i);
           qDebug() << qPrintable(QString("%2").arg(fileInfo.fileName()));
       }
         playlist->addMedia(QUrl("/Users/Public/Music/Sample Music/Kalimba.mp3"));
         playlist->addMedia(QUrl("/Users/Public/Music/Sample Music/Maid with the Flaxen Hair.mp3"));
         playlist->addMedia(QUrl("/Users/Public/Music/Sample Music/Sleep Away.mp3"));
         playlist->addMedia(QUrl("/Users/Public/Music/Sample Music/Phia-Sau-Mot-Co-Gai-Soobin-Hoang-Son.mp3"));
         playlist->addMedia(QUrl("/Users/Public/Music/Sample Music/Sau-Tat-Ca-ERIK-ST-319.mp3"));
         playlist->addMedia(QUrl("/Users/Public/Music/Sample Music/Yeu-La-Tha-Thu-Em-Chua-18-OST-OnlyC.mp3"));
}
