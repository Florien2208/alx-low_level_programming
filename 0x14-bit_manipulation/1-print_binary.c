#include "main.h"

/**
 * print_binary - binary representation
 * @n: long int.
 * done by Florien.
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}

