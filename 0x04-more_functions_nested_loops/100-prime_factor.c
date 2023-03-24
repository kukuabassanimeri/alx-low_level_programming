#include "main.h"
/*Write a program that finds and prints the*/
/*largest prime factor of the n*/
/*umber 612852475143, followed by a new line.*/
/**
 * main - Entry point
 * Return: Always 0 (sucess)
 */
int main(void)
{
	long x, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
	if (number % x == 0)
	{
	maxf = number / x;
	}
	}
	printf("%ld\n", maxf);
	return (0);
}
