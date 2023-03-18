#include <stdio.h>
/* program that prints the lowercase alphabet i*/
/*n reverse, followed by a new line*/
/**
 * main -Enry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char Lower;

	for (Lower = 'z'; Lower >= 'a'; Lower--)
	{
		putchar(Lower);
	}
	putchar('\n');
	return (0);
}
