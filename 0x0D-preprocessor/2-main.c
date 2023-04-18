#include <stdio.h>
#include <string.h>
/*a program that prints the name of the file it was */
/*compiled from, followed by a new line.*/
/**
 * main - function
 *
 * Return: Always 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
