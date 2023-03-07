#include "main.h"
#include <stdio.h>


/**
 * print_chessboard - check description
 * @a: array
 * Description: The function prints the chessboard
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int i, n;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 0; n++)
			_putchar(a[i][n]);
		_putchar('\n');
	}
}
