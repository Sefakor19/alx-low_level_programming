#include "main.h"

/**
 * prints_alphabets_x10 - prints alphabets 10 times
 * Description: What is this program doing?
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int ten;
	char la;

	for (ten = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}
}
