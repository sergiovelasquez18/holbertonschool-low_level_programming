#include "holberton.h"

/**
 * clear_bit - sets the evalue of bit to 0 at given index
 * @n: number to set the evalue
 * @index: index of the bit to set
 * Return: 1 if it worked , -1 if it didnt't
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
