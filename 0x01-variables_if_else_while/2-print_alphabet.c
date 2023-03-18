#include <stdio.h>
/* a program that prints the alphabet in lowercase, */
/*and then in uppercase, followed by a new line. */
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
