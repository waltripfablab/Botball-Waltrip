#include <kipr/botball.h>
#include <stdio.h>
#include "communication.h"

int main()
{
    initializeCommunications(1);
    connectToWallaby();
    printf("Done");
    msleep(20000);
    return(0);
}


 

