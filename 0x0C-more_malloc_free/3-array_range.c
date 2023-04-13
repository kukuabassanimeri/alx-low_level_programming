#include "main.h"
/*function that creates an array of integers.*/
/**
 * array_range - function
 * @max: Our first parameter
 * @min: Our second parameter
 * Return: returns a pointer of int data type
 */
int *array_range(int min, int max)
{
	unsigned int n_pos = 0;
	int *ptr;
	unsigned int j;

	if (min > max)
		return (NULL);
	n_pos = (max - min) + 1;
	ptr = (int *)malloc(n_pos * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < n_pos; j++)
	{
		ptr[j] = min;
		min++;
	}
	return (ptr);
}
