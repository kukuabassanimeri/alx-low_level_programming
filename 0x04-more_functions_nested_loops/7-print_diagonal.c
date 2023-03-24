#include "main.h"
/*Write a function that draws a diagonal line on the terminal*/
/**
 * print_diagonal - function that draws the diagonal line
 * @n: parameter that draws the diagonal
 */
void print_diagonal(int n)
{
	int value = 1, count, NOT, space;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			putchar('\\');
			putchar('\n');
			if (n > value)
			{
				NOT = count + 1;
				for (space = 0; space < NOT; space++)
				{
					putchar(' ');
				}
			} else
			{
				;
			}
			value += 1;
		}
	} else
	{
		putchar('\n');
	}
}
