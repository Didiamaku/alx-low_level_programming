#include "main.h"

/**
 * binary_to_uint - convert a binary no to unsigned int
 * @b: string binary
 *
 * Return: converted no, 0 if b is NULL
 * or one or more char in b is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	int str_char;
	unsigned int no;

	no = 0;

	if (!b)
		return (0);

	/* traverse string no & check if 0 or 1 */
	for (str_char = 0; b[str_char] != '\0'; str_char++)
	{
		if (b[str_char] != '0' && b[str_char] != '1')
			return (0);
	}
	/* traverse string & convert each char to ui */
	for (str_char = 0; b[str_char] != '\0'; str_char++)
	{
		no  <<= 1;
		if (b[str_char] == '1')
			no += 1;
	}
	return (no);
}
