#include "main.h"
#include <stdio.h>

/**
 * _strchr - Check description
 * @s: input
 * @c: input
 * Description: The function locates a character in a string
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
