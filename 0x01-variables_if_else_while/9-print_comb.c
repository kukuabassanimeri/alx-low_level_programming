#include <stdio.h>
/* program that prints all possible*/
/*combinations of single-digit numbers.*/
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar('0' + num);
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		} else
		{
			;
		}
	}
	putchar('\n');
	return (0);
}
