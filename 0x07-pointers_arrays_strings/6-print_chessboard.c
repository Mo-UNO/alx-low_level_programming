#include "main.h"

/**
 * print_chessboard - prints chessboard
 *
 * @a: rows
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
        int i1;
        int j1;

        for (i1 = 0; i1 < 8; i1++)
        {
                for (j1 = 0; j1 < 8; j1++)
                {
                        _putchar(a[i1][j1]);
                }
                _putchar('\n');
        }
}
