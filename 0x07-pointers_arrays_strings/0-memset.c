#include "main.h"
#include <stdio.h>

/**
 * _memset - fill memory
 * @s: set array
 * @b: value to fill
 * @n: number of times
 * Return: value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
