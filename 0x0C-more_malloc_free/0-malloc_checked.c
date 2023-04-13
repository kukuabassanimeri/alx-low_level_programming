#include "main.h"
/*Write a function that allocates memory using malloc.*/
/**
 * malloc_checked - Our function
 *
 * @b: our unsigned int paramter
 * Return: returns a void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
