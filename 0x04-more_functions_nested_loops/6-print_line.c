#include "main.h"
/*Write a function that draws a straight line in the terminal.*/
/**
 * print_line - draw straight line
 * @n: parameter that draw straight line
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
