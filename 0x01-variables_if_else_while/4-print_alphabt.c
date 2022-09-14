#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)

{
	char n;

	for (n = 'a'; n <= 'z'; n++)

	{
		if (n == 'e' || n == 'q')

			continue;

		putchar(n);
	}
	putchar('\n');

	return (0);
}
