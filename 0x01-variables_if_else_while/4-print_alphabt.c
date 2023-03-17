#include <stdio.h>
/* a program that prints the alphabet in lowercase, */
/*followed by a new line.*/
/**
 * main -Entery point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower == 'q' || lower == 'e')
		{
			;
		} else
		{
			putchar(lower);
		}
	}
	putchar('\n');
	return (0);
}

