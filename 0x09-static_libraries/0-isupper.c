#include "main.h"
/*Write a function that checks for uppercase character.*/
/**
 * _isupper - function that check for uppercase
 * @c: parameter that check for uppercase charater
 *
 * main -Entry point
 * Return: 1 if c is uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

