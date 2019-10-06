//
// Created by Egemen on 6.10.2019.
//

#include <stdio.h>
#include "globals.h"

void pickPosition(){

    //  define variables
    int x ;
    int y;

    //  read the position to place the card
    scanf("%d%d", &x, &y);

    //  assign the position if suitable
    if(x <= 4 && y <= 4){
        tablePosX = x;
        tablePosY = y;
    }
    else{
        printf("\nError!\n->The position you chose was invalid.\n->Pick another one.\n");
        return pickPosition();
    }
}
