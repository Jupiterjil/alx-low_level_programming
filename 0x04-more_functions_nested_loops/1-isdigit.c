#include "main.h"

/**
 * _isdigit - This checks for digits thrugh 0 to 9
 * @c: This is the int to be checked
 * Return: 1 if true and 0 if false
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
