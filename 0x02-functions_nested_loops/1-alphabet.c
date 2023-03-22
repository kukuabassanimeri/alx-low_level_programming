#include "main.h"
/*Write a function that prints the alphabet, */
/*in lowercase, followed by a new line.*/
/**
 * print_alphabet - prints all lowercase alphabets
 *
 * Return: void always
 */
void print_alphabet(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		_putchar(lower);
	}
	_putchar('\n');
}
