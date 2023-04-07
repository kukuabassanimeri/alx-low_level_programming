#include "main.h"
/* function that compares two strings.*/
/**
 * _strcmp - function that compare two strings
 * @s1: parameter
 * @s2: paramter
 * Return: if str1 < str2, the negative difference of the first unmatch
 * if str1 == str2, 0.
 * if str1 > str2, the positive difference of thre first unmatched
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
