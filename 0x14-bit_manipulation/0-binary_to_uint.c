#include "main.h"

/**
 * binary_to_uint - converts a binary number represented as a string to an unsigned integer
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal_value = 0;

	if (!b)
		return (0); // Check if the input string is NULL
	
	// Iterate through the binary string
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		// Calculate the decimal value using bitwise operations
		decimal_value = 2 * decimal_value + (b[i] - '0');
	}

	return (decimal_value);
}

