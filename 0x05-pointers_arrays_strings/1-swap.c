#include <stdio.h>

/**
 * swap_int -swap the values of two integers
 * @a: The first integer to be swaped
 * @b: The second to be swaped
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
