#include "main.h"
/*Write a function that sets the value of a bit to 1 at a given index*/
/**
 * set_bit - setd a bit at given index to 1
 * @n: first parameter
 * @index: second parameter
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
