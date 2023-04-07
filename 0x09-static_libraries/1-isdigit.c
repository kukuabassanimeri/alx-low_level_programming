#include "main.h"
/*Write a function that checks for a digit (0 through 9).*/
/**
 *_isdigit - function that checks for digit
 * @c: parameter that checks for digit
 *
 * Return: 1 if c is a digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
