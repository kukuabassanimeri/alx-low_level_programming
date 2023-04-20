#include "variadic_functions.h"
/*Write a function that prints strings, followed by a new line.*/
/**
 * print_strings - function
 * @separator: first parameter
 * @n: second parameter
 * @...: third parameter
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	va_list string_list;
	char *s;

	va_start(string_list, n);
	for (k = 0; k < n; k++)
	{
		s = va_arg(string_list, char*);
		if (s == NULL)
		{
			printf("(nil)");
		} else
		{
			printf("%s", s);
		}
		if (separator != NULL && k != n - 1)
			printf("%s", separator);
	}
	va_end(string_list);
	printf("\n");
}
