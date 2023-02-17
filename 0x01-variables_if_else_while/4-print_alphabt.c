#include <stdio.h>

/**
 * main - entry point of code to print apha except e and q
 *
 * Return: 0 on success
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		if (c != 'e' && c != 'q')
			putchar(c);
	putchar('\n');
	return (0);
}
