#include "main.h"

/**
 * flip_bits - count no of bits
 * @n: no 1
 * @m: no 2
 *
 * Return: no of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int sur = n ^ m, bits = 0;

	while (sur > 0)
	{
		bits += (sur & 1);
		sur >>= 1;
	}

	return (bits);
}
