#include "main.h"
/**
 * _strchr - locate where char is in string
 * @s: string
 * @c: character
 * Return: Value of char
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			return (s + a);
		}
	}
	if (s[a] == c)
		return (s + a);
	return (0);
}
