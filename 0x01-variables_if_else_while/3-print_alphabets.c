#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char d = 'a';
	char D = 'A';

	while (d <= 'z')
	{
		putchar(d);
		d++;
	}
	while (D <= 'Z')
	{
		putchar(D);
		D++;
	}
	putchar('\n');

	return (0);
}
