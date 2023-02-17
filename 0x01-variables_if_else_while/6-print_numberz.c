#include <stdio.h>

/**
 * main - entry point for code
 *
 * Return: 0 if code success
 */
int main(void)
{
	int a;

	for (a = 0 ; a <= 9 ; a++)
		putchar(a + '0');
	putchar('\n');
	return (0);
}
