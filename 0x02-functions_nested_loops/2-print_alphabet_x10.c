#include "main.h"

/**
 * prints_alphabets_x10 - prints alphabets 10 times
 *
 * Return: 0
 */
void prints_alphabets_x10(void)
{
	int ten;
	char la;

	for (10 = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}
}

