#include <stdio.h>
#include "definitions.h"
#include "globals.h"

//  card game prototype
//  TODO: put a counter to keep track of the card placements

int main(){

    // Welcome the user
    printf("%s%s%s%s    WELCOME    %s%s%s%s\n", SPADES, CLUBS, HEARTS, DIAMONDS,
                                                SPADES, CLUBS, HEARTS, DIAMONDS);

    //  prompt user to pick a card
    printf("Do you want to pick a card? (Y/N): ");
    scanf("%c", &ans);

    if ((ans == 'Y') || (ans == 'y')) {
        while (!status && turn <= 16) {

            //  player 1 pulls a card
            p1Pulls = pullCard(deck);

            //  determine what type of card is pulled
            //  SPADES
            if ((p1Pulls >= 101) && (p1Pulls <= 113)) {
                printf("You picked: %d%s\n", p1Pulls - 100, SPADES);
                pickedValue = p1Pulls - 100;
                setName = SPADES;
            }

            //  CLUBS
            else if ((p1Pulls >= 201) && (p1Pulls <= 213)) {
                printf("You picked: %d%s\n", p1Pulls - 200, CLUBS);
                pickedValue = p1Pulls - 200;
                setName = CLUBS;
            }

            //  HEARTS
            else if ((p1Pulls >= 301) && (p1Pulls <= 313)) {
                printf("You picked: %d%s\n", p1Pulls - 300, HEARTS);
                pickedValue = p1Pulls - 300;
                setName = HEARTS;
            }

            //  DIAMONDS
            else if ((p1Pulls >= 401) && (p1Pulls <= 413)) {
                printf("You picked: %d%s\n", p1Pulls - 400, DIAMONDS);
                pickedValue = p1Pulls - 400;
                setName = DIAMONDS;
            }

            //  put the card on the table according to user decision
            printf("\nDo you want to put this card on the table? (Y/N): ");
            scanf(" %c", &put);
            if ((put == 'Y') || (put == 'y')) {
                printf("\nChoose a position on the table to place your card (row and column _ 1 to 4): ");
                pickPosition();

                if(cardValue[tablePosX - 1][tablePosY - 1] == 0 && *cardSet[tablePosX - 1][tablePosY - 1] == '*') {
                    //  place the card to the given position if available
                    cardValue[tablePosX - 1][tablePosY - 1] = pickedValue;
                    cardSet[tablePosX - 1][tablePosY - 1] = setName;

                    //  increment the turn count after each card placement
                    turn++;

                    //  print the current table status
                    printf("\nCurrent table state:\n");
                    printTable(cardValue, cardSet);
                } else{
                    printf("\nError!\n->The position you chose is occupied.\n->Pick another card.\n");
                    continue;
                }

                //  status = 1;
            }
            else if ((put == 'N') || (put == 'n')) {
                // set status 1 to exit the loop
                status = 1;
            }
        }
    }
    else if ((ans == 'N') || (ans == 'n')) {
        printf("Come back if you want to play again :)\n");
        return 0;
    } else {
        printf("\nInvalid response! Enter again.\n");
        //scanf(" %c", &ans);
    }

    return 0;
}

