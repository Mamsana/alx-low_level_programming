#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, d;

	for (i = '0'; i < '9'; i++)
	{
		for (d = i + 1; d <= '9'; d++)
		{
			if (d != i)
			{
				putchar(i);
				putchar(d);
				if (i == '8' && d == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
