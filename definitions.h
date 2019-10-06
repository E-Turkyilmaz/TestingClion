//
// Created by Egemen on 27.07.2019.
//

#ifndef TESTINGCLION_DEFINITIONS_H
#define TESTINGCLION_DEFINITIONS_H

#define SPADES      "\xE2\x99\xA0"
#define CLUBS       "\xE2\x99\xA3"
#define HEARTS      "\xE2\x99\xA5"
#define DIAMONDS    "\xE2\x99\xA6"

//  FUNCTIONS
int pullCard(int arr[4][13]);
void printTable(int arr[4][4], char* set[4][4]);
void pickPosition();

/*
 * *************************************************************************************************** *
 * *************************************************************************************************** *
 */

//  VARIABLES
//  define and assign the deck content
int deck[4][13] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                           11, 12, 13},
                   {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                           11, 12, 13},
                   {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                           11, 12, 13},
                   {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                           11, 12, 13}};

/*
 * *************************************************************************************************** *
 * *************************************************************************************************** *
 */

//  array to store the values of the cards that are put on the table
static int cardValue[4][4] = {{0, 0, 0, 0},
                              {0, 0, 0, 0},
                              {0, 0, 0, 0},
                              {0, 0, 0, 0}};

/*
 * *************************************************************************************************** *
 * *************************************************************************************************** *
 */

//  array to store the set of the cards that are put on the table
static char *cardSet[4][4] = {{"*", "*", "*", "*"},
                              {"*", "*", "*", "*"},
                              {"*", "*", "*", "*"},
                              {"*", "*", "*", "*"}};

/*
 * *************************************************************************************************** *
 * *************************************************************************************************** *
 */

int p1Pulls, pickedValue = 0;    //  the card that player 1 pulled
int status = 0;                  //  game status
static int turn = 0;             //  counter for each turn
char ans, put;                   //  user inputs
char* setName = "*";             //  card set that of player 1 pulled

#endif //TESTINGCLION_DEFINITIONS_H
