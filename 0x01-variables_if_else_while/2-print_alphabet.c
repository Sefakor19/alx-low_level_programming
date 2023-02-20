#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that prints an alphabet in lower case, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
