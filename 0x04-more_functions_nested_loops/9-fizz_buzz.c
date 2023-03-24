#include "main.h"
/*The “Fizz-Buzz test” is an interview question */
/*designed to help filter out the 99.5% */
/*of programming job candidates */
/*who can’t seem to program their way out of a wet paper bag.*/
/**
 * main - Entry point
 * Return: int fizz of 3 buzz for 5
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 15 == 0)
		{
			printf("FizzBUZZ");
		} else if (num % 3 == 0)
		{
			printf("'BUZZ");
		} else
		{
			printf("%d", num);
		}
		if (num != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
