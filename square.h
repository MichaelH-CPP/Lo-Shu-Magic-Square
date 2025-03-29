#include <stdio.h>
#include <time.h>
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

void makeSquare(int newSquare[3][3])
{
    int numbers[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 8; i > 0; i--)
    {
        int j = rand() % (i + 1);
        int temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
    }

    // Populate the 3x3 matrix
    int index = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            newSquare[i][j] = numbers[index++];
}