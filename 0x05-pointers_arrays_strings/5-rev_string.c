#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int a, b, k;
	char *c, aux;

	k = s;

	while (s[b] != '\0')
	{
		b++;
	}

	for (c = 1; c < b; c++)
	{
		a++;
	}

	for (a = 0; a < (b / 2); i++)
	{
		aux = s[a];
		s[a] = *k;
		*k = aux;
		c--;
	}
}
