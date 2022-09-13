#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %ibyte(s)\n", sizeof(char));
	printf("Size of an int: %ibyte(s)\n", sizeof(int));
	printf("Size of a long int: %ibyte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ibyte(s)\n", sizeof(long long int));
	printf("Size of a float: %ibyte(s)\n", sizeof(float));
	return (0);
}
