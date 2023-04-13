#include "main.h"
/*Write a function that allocates memory for an array, using malloc.*/
/**
 * _calloc - our own calloc function
 *
 * @nmemb: first parameter called no of blocks
 * @size: second parameter called size of each block
 * based on the data type
 * Return: return a void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, b = 0;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	b = nmemb * size;
	p = malloc(b);
	if (p == NULL)
	{
		return (NULL);
	}
	while (a < b)
	{
		p[a] = 0;
		a++;
	}
	return (p);
}
