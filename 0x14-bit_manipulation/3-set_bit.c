#include "main.h"

/**
 * set_bit - set bit to 1
 * @index: index of bit start from 0
 * @n: bit
 *
 * Return: 1 if correct, -1 if wrong
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 4))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
