#include "main.h"
/* a function that reverses a string.*/
/**
 * rev_string - functions that reverses
 * @s: parameter that reverses
 * main -Entry point
 * Return: Always 0 (success)
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter]!= '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
		counter--,
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}

