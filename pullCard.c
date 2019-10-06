#include <stdlib.h>
#include <time.h>

//  The function that pulls the card
int pullCard(int arr[4][13]){
    int set;
    int member;

    //  determine the set and the member of the deck randomly
    srand(time(NULL));
    set = (rand() % 4);
    member = (rand() % 13);

    //  return values based on set type
    if(set == 0){
        return arr[set][member] + 100;
    }
    else if(set == 1){
        return arr[set][member] + 200;
    }
    else if(set == 2){
        return arr[set][member] + 300;
    }
    else{
        return arr[set][member] + 400;
    }
};