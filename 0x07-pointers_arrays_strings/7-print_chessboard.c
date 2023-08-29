#include "main.h"
/**
 * print_chessboard - Enter point
 *
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int i1;
	int j1;

	for (i1 = 0; i1 < 8; i1++)
	{
		for (j1 = 0; j1 < 8; j1++)
			_putchar(a[i1][j1]);
		_putchar('\n');
	}
}
