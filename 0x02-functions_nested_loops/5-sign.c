#include "main.h"

/**
 * print_sign - This program prints the sign of numbers
 * @n: This is the parameter to be checked
 * Return: 1 if > 0 or returns -1 if < 0 else return 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		_putchar('0');
		return (0);
}
