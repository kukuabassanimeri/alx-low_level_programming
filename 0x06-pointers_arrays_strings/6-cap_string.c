#include "main.h"
/*a function that capitalizes all words of a string.*/
/**
 * cap_string - function that capitalizes all words of strings
 * @c: parameter
 * Return: pointer for character
 */
char *cap_string(char *c)
{
	int index = 0;

	while (c[index])
	{
		while (!(c[index] >= 'a' && c[index] <= 'z'))
		{
			index++;
		}
		if (c[index - 1] == ' ' ||
		c[index - 1] == '\t' ||
		c[index - 1] == '\n' ||
		c[index - 1] == ',' ||
		c[index - 1] == ';' ||
		c[index - 1] == '.' ||
		c[index - 1] == '!' ||
		c[index - 1] == '?' ||
		c[index - 1] == '"' ||
		c[index - 1] == '(' ||
		c[index - 1] == ')' ||
		c[index - 1] == '{' ||
		c[index - 1] == '}' ||
		index == 0)
		{
			c[index] -= 32;
		}
		index++;
	}
	return (c);
}
