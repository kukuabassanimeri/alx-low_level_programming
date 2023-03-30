#include "main.h"
/* a function that changes all lowercase */
/*letters of a string to uppercase.*/
/**
 * string_toupper - changes all lowercas letter
 * @str: string to be changed
 * Return: string
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= 32;
			index++;
		}
	}
	return (str);
}
