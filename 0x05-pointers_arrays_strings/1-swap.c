#include <stdio.h>

/**
 * swap_int - swap the values of two integers
 * @a: The first enteger tobe swaped 
 * @b:The second to be swppped
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
