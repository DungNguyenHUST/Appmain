#ifndef MUSICPLAYER_H
#define MUSICPLAYER_H

#include <QObject>
#include <QWidget>
#include <QMediaPlayer>

class MusicPlayer : public QWidget
{
    Q_OBJECT
public:
    explicit MusicPlayer(QWidget *parent = 0);

public slots:

    void play();
    void stop();
    void next();
    void pause();
    void add();
private:
    QMediaPlayer *player;
    QMediaPlaylist *playlist;

};

#endif // MUSICPLAYER_H
