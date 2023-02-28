#include "main.h"

/**
 * print_rev - check the description
 * @s: The string to print
 * Description: The function prints a string in reverse,
 * followed by a new line.
 * Return: void
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
	c++;
	}

	for (c -= 1; c >= 0; c--)
	{
	_putchar(s[c]);
	}
	_putchar('\n');
}
