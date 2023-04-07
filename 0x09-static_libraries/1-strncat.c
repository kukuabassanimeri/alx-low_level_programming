#include "main.h"
/*function that concatenates two strings.*/
/**
 * _strncat - function that concatenates two strings
 * @dest: parameter
 * @src: parameter
 * @n: int parameter
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length_1 = strlen(dest);
	int length_2 = strlen(src);
	int length_3 = n / sizeof(src[0]);
	int index;
	int i;

	for (i = 0; i < length_3; i++)
	{
		if (i <= length_2)
		{
			index = length_1 + i;
			dest[index] = *src;
			src++;
		}
	}
	return (dest);
}
