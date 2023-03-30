#include "main.h"
/* a function that changes all lowercase */
/*letters of a string to uppercase.*/
/**
 * string_toupper - changes all lowercas letter
 * @str: string to be changed
 * Return: pointer to the changed string
 *
 */
char *string_toupper(char *str)
{
	int ascii_value;
	int length = strlen(str);
	int i = 0;

	for (i = 0; i < length; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			ascii_value = (int)str[i] - 32;
			str[i] = (char)ascii_value;
		} else
		{
			str[i] = str[i];
		}
	}
	return (str);
}
