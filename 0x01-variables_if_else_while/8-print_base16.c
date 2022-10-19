#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 48;
	char v = 'a';

	while (x < 58)
	{
		putchar(x);
		x++;
	}
	while (v <= 'f')
	{
		putchar(v);
		v++;
	}
	putchar('\n');

	return (0);
}
