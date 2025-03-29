#include <stdio.h>
#include <string.h>

#include <stdlib.h>
#include "square.h"
int main()
{
    int squareOne[3][3] = {
        {8, 1, 6},
        {3, 5, 7},
        {4, 9, 2}};
    int squareTwo[3][3] = {
        {8, 5, 6},
        {3, 1, 7},
        {4, 9, 2}};

    printSquare(squareOne);
    (checkIfSquare(squareOne)) ? printf("This is a magic square.\n") : printf("This is not a magic square.\n");
    printSquare(squareTwo);
    (checkIfSquare(squareTwo)) ? printf("This is a magic square.\n") : printf("This is not a magic square.\n");
    return 0;
}