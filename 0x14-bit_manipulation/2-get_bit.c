#include "main.h"

/**
 * get_bit -  value of a bit at an index
 * @index: index of bit
 * @n
 *
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 4))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
