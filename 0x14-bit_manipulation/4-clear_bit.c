#include "main.h"

/**
 * clear_bit - Bit is 0
 * @index: index of bit
 * @n: bit
 *
 * Return: 1 if correct, -1 if wrong
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 4))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
