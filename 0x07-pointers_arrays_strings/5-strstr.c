#include "main.h"

/**
 * _strstr - check description
 * @haystack: input
 * @needle: input
 * Description: The function locates a substring
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
