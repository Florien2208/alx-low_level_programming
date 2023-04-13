#include "main.h"

/**
 * flip_bits - returns number of flip from one to another 
 * @n: number one.
 * @m: number two.
 * Return: number of bits.
 * Done by Florien
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
        /* a is number of bits */
	unsigned int a;

	for (a = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			a++;
	}

	return (a);
}
