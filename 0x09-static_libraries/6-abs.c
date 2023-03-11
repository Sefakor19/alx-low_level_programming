#include "main.h"

/**
 * _abs - Check description
 * Description: The function computes the absolute value of an integer
 * Return: The absolute value of number or 0
 */
int _abs(int c)
{
	

	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
