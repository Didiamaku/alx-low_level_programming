#include <stdio.h>

/**
 * main - entry point for program that prints single digit numbers
 *
 * Return: 0 on code success
 */
int main(void)
{
	int a;

	for (a = 0 ; a <= 9 ; a++)
		printf("%d", a);
	printf("\n");
	return (0);
}
