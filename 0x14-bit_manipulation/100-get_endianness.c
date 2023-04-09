#include "main.h"

/**
 * get_endianness - check 
 *
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	unsigned int q;
	char *c;

	q = 1;
	c = (char *) &q;

	return ((int)*c);
}
