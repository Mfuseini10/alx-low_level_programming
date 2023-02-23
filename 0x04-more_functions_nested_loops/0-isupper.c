#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if uppercase
 * @c: character to check
 *
 * Return: 1 for upper letter or 0 for any else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
