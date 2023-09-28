#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index in a decimal number.
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
    int bit_val;

    // Check if the index is out of bounds
    if (index > 63)
        return (-1);

    // Shift the desired bit to the least significant position and use bitwise AND to extract its value
    bit_val = (n >> index) & 1;

    return (bit_val);
}

