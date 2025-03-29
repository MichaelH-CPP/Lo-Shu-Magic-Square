#include <stdio.h>

#include <stddef.h>

typedef struct
{
    int squareArray[3][3];
} MagicSquare, *PtrToMagicSquare;
typedef const MagicSquare *PtrToConstMagicSquare;