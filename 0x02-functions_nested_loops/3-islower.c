#include "main.h"

/**
 * _islower - checks if char is in lowercase
 * @c: is the parameter to be checked
 * Returns 1 if true and 0 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
