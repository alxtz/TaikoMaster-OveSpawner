#include <QApplication>
#include <QDebug>
#include <QObject>
#include "SheetMusic.h"
#include "SheetMusicPlayer.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    SheetMusic Trout;

    Trout.notes[0].type=1;
    Trout.notes[1].type=0;
    Trout.notes[2].type=0;
    Trout.notes[3].type=0;
    Trout.notes[4].type=0;
    Trout.notes[5].type=0;
    Trout.notes[6].type=1;
    Trout.notes[7].type=1;
    Trout.notes[8].type=1;
    Trout.notes[9].type=1;
    Trout.notes[10].type=0;
    Trout.notes[11].type=0;
    Trout.notes[12].type=0;
    Trout.notes[13].type=0;

    Trout.notes[0].spawnSec=1500;
     //等500
    Trout.notes[1].spawnSec=2000;
     //等500
    Trout.notes[2].spawnSec=2500;
     //等500
    Trout.notes[3].spawnSec=3000;
     //等500
    Trout.notes[4].spawnSec=3500;
     //等500
    Trout.notes[5].spawnSec=4000;
     //等1000
    Trout.notes[6].spawnSec=5000;
     //等500
    Trout.notes[7].spawnSec=5500;
     //等500
    Trout.notes[8].spawnSec=6000;
     //等750
    Trout.notes[9].spawnSec=6750;
    Trout.notes[10].spawnSec=7000;
    Trout.notes[11].spawnSec=7250;
    Trout.notes[12].spawnSec=7500;
    Trout.notes[13].spawnSec=7750;

    SheetMusicPlayer * sheetMusicPlayer = new SheetMusicPlayer( &Trout);
    sheetMusicPlayer->start();

    return a.exec();
}

