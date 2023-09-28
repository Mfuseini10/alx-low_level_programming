#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0 in a decimal number
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    // Check if the index is out of bounds
    if (index > 63)
        return (-1);

    // Use bitwise left shift, bitwise NOT, and bitwise AND to clear the bit to 0
    *n = (~(1UL << index) & *n);
    
    return (1);
}

