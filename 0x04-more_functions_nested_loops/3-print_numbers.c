#include "main.h"
/*Write a function that prints the numbers, */
/*from 0 to 9, followed by a new line.*/
/**
 * print_numbers - from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
