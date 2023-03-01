#include "main.h"
#include <stdio>
/**
 * cap_string - capitalizes the string
 * @s: string
 * Return: the string capitalized
 */
char *cap_string(char *s)
{
	int a = 0, i;
	int cspc = 13;
	char Arr[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < cspc)
		{
			if ((a == 0 || s[a - 1] == Arr[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;

			i++;
		}

		a++;
	}

	return (s);
}
