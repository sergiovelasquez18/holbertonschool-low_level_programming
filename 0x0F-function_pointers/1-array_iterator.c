#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a funtion given as parameter
 * @array: the array
 * @size: size of the array
 * @action: pointer to the fuction you need to use
 * Return: always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int arr;

	if ((array == NULL) || (size == 0) || (action == NULL))
		return;
	for (arr = 0; arr < size; arr++)
		action(array[arr]);
}
