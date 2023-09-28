#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
    unsigned int i = 1;
    char *c = (char *) &i;

    // Dereference the pointer to the first byte of the integer
    // If the value at that byte is 1, it means it's little endian
    // Otherwise, it's big endian
    return (*c);
}

