#include "main.h"
/*a function that returns the length of a string.*/
/**
 * _strlen_recursion - my function
 *
 * @s: parameter
 * Return: int value
 */
int _strlen_recursion(char *s)
{
	int count = 0;
	int sum = 0;
	int length = strlen(s);

	if (*s == '\0')
	{
		return (0);
	}
	count += 1;
	sum = count + _strlen_recursion(s + 1);
	if (sum >= length)
		sum = sum;
	return (sum);
}
