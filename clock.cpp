#include "clock.h"

extern int countDelay;
extern int delays[100];

clock::clock()
{
    QTimer::singleShot( delays[countDelay] , signalMapper , )
}
