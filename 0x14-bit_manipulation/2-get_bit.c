#include "holberton.h"

/**
 * get_bit - return the evalue of bit at a given index
 * @n: number to find the bit
 * @index: index, staring from 0 of the bit you want to get
 * Return: the value of a bit at given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return (n >> index & 1);
}
