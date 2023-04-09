#include <stdio.h>
#include <stdlib.h>
/* program that multiplies two numbers.*/
/**
 * main - function
 * @argc: parameter
 * @argv: parameter
 * Return: int
 */
int main(int argc, char **argv)
{
	int j;
	int result = 1;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	for (j = 1; j < argc; j++)
	{
		result *= atoi(argv[j]);
	}
	printf("%d\n", result);
	return (0);
}
