#include <stdio.h>

#include <stddef.h>

static int checkIfSquare(int input[3][3])
{
    int rowSum = 0, colSum = 0, leftDiagSum = 0, rightDiagSum = 0;
    for (int i = 0; i < 3; i++)
    {
        leftDiagSum += input[i][i];
        rightDiagSum += input[i][2 - i];
        for (int j = 0; j < 3; j++)
        {
            rowSum += input[i][j];
            colSum += input[j][i];
        }
        if (rowSum != 15 && colSum != 15)
        {
            return 0; // Not a magic square
        }
        rowSum = colSum = 0; // Reset sum for the next row
    }

    if (leftDiagSum != 15 && rightDiagSum != 15)
    {
        return 0; // Not a magic square
    }
    return 1; // It's a magic square
}

void printSquare(int input[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("[");
        for (int j = 0; j < 3; j++)
        {
            printf("%d", input[i][j]);
            (j != 2) ? printf(" ") : printf("]\n");
        }
    }
}