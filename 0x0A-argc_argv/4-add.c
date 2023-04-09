#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* a program that adds positive numbers.*/
/**
 * main - function
 * @argc: parameter
 * @argv: parameter
 * Return: int
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int y, z;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (y = 1; y < argc; y++)
	{
		for (z = 0; argv[y][z] != '\0'; z++)
		{
			if (!(isdigit(argv[y][z])))
			{
				printf("Error\n");
				return (1);
			}
			continue;
		}
	}
	for (y = 1; y < argc; y++)
	{
		result += atoi(argv[y]);
	}
	printf("%d\n", result);
	return (0);
}
