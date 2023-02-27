#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int a, b, c;
	char *k, aux;

	k = s;

	while (s[b] != '\0')
	{
		b++;
	}

	for (c = 1; c < b; c++)
	{
		k++;
	}

	for (a = 0; a < (b / 2); a++)
	{
		aux = s[a];
		s[a] = *k;
		*k = aux;
		k--;
	}
}
