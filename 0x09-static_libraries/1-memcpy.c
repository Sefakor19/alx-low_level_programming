#include "main.h"
#include <stdio.h>

/**
 * _memcpy - check description
 * @dest: input
 * @src: input
 * @n: input
 * Description: The function copies memeory area
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
