#include "variadic_functions.h"
/*Write a function that prints numbers, followed by a new line*/
/**
 * print_numbers - function
 * @separator: parameter
 * @n: parameter
 * @...: parameter
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numlist;
	unsigned int k;

	va_start(numlist, k);
	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(numlist, int));
		if (separator != NULL && k != n - 1)
			printf("%s", separator);
	}
	print("\n");
}
