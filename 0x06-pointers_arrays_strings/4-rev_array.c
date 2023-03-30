#include "main.h"
/*a function that reverses the content of an array of integers*/
/**
 * reverse_array - function that reverse
 * @a: parameter
 * @n: parameter
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int arr, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		arr = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = arr;
	}
}
