#include "main.h"
/*Write a function that prints the numbers,*/
/*from 0 to 9, followed by a new line.*/
/**
 * print_most_numbers - print num except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char num;

	for (num = 0; num <= 10; num++)
	{
		if (num == 2 || num == 4)
		{
			;
		} else
		{
			_putchar('0' + num);
		}
	}
	_putchar('\n');
}
