#include <stdio.h>

// The function that prints the table
void printTable(int arr[4][4], char* set[4][4]){
    // array position indexes
    int x;  //  rows
    int y;  //  columns

    // loop through the array and print as a table
    printf("\n");
    for(x = 0; x < 4; x++){             //  rows
        printf("\t\t");
        for(y = 0; y < 4; y++){         //  columns
            if(arr[x][y] != 0){
                printf("%d%s\t", arr[x][y], set[x][y]);
            }
            else {
                printf("%c%c\t", '*', '*');
            }
        }
        printf("\n");
    }
    printf("\n");
};