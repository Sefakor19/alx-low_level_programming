#include "main.h"

/**
 * _puts - Check the description
 * @str: The string to print
 * Description: The function prints a string, followed by
 * a new line, to stdout.
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
