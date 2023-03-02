#include "main.h"
#include <stdio.h>

/**
 * reverse_array - check description
 * @a: array
 * @n: number of elements of array
 * Description: The function reverses the content
 * of an array of integers
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
