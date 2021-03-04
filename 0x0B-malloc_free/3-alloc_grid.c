#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim array
 */
int **alloc_grid(int width, int height)
{
	int **arr, s, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (s = 0; s < height; s++)
	{
		arr[s] = malloc(sizeof(int) * width);
		if (arr[s] == NULL)
		{
			for (; s >= 0; s--)
			{
				free(arr[s]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (s = 0; s < height; s++)
	{
		for (n = 0; n < width; n++)
			arr[s][n] = 0;
	}
	return (arr);
}
