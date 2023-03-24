#include "main.h"
/*Write a function that prints the numbers,*/
/*from 0 to 9, followed by a new line.*/
/**
 * print_most_numbers - from 0 to 9 except 2 and 4
 * main: -Entry 0 (success)
 * Return: void
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
