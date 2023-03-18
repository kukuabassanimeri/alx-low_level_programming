#include <stdio.h>
/* Write a program that prints all single digit */
/*numbers of base 10 starting from 0, followed by a new line.*/
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
