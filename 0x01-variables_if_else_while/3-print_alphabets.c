#include <stdio.h>

/**
 * main - entry point of code to print the alphabet
 *
 * Return: 0 on code success.
 */
int main(void)
{
	char i;
	char k;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (k = 'A' ; k <= 'Z' ; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
