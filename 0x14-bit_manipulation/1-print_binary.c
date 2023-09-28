#include "main.h"

/**
 * print_binary - prints the binary representation of a decimal number without using arrays, malloc, or the % and / operators.
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
    int i, count = 0;
    unsigned long int current;

    // Iterate through each bit of the number
    for (i = 63; i >= 0; i--)
    {
        // Shift the current bit to the least significant position
        current = n >> i;

        // Check if the least significant bit is set (1)
        if (current & 1)
        {
            _putchar('1'); // Print '1' if the bit is set
            count++;
        }
        else if (count)
        {
            _putchar('0'); // Print '0' if the bit is not set and there were previous set bits
        }
    }

    // If no bits were printed, print a single '0' to represent zero
    if (!count)
        _putchar('0');
}

