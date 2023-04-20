#include "variadic_functions.h"
/*Write a function that returns the sum of all its parameters.*/
/**
 * sum_them_all - function
 * @n: first parameter
 * @...: second parameter
 *
 * Return: type int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numlist;
	unsigned int k;
	int sum = 0;

	va_start(numlist, n);
	for (k = 0; k < n; k++)
	{
		sum += va_arg(numlist, int);
	}
	va_end(numlist);
	return (sum);
}
