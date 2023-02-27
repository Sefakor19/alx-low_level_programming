#include "main.h"

/**
 * swap_int - Check description
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 * Description: The function swaps the values of two integers
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
