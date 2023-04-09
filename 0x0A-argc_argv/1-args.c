#include <stdio.h>
/*program that prints the number of arguments passed into it.*/
/**
 * main - function
 * @argc: parameter
 * @argv: parameter
 * Return: int
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	int sum = 0;
	int y;

	for (y = 1; y < argc && argc > 1; y++)
	{
		sum++;
	}
	printf("%d\n", sum);
	return (0);
}
