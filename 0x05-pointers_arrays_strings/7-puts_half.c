#include "main.h"
/* function that prints half of a string, followed by a new line.*/
/**
 * puts_half - function that prints half of string
 * @str: parameter of function
 * main -Entry point
 * Return: Always 0 (success)
 */
void puts_half(char *str)
{
	int j = 0;
	int k;

	while (str[j] != '\0')
	{
	j++;
	}
	if (j % 2 == 1)
	{
	k = (j - 1) / 2;
	k += 1;
	}
	else
	{
	k = j / 2;
	}
	for (; k < j; k++)
	{
	_putchar(str[k]);
	}
	_putchar('\n');
}
