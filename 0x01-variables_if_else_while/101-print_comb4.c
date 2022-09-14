#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, d, n;

	for (i = '0'; i < '9'; i++)
	{
		for (d = i + 1; d <= '9'; d++)
		{
			for  (n = d + 1; n <= '9'; n++)
			{
				if ((d != i) != n)
				{
					putchar(i);
					putchar(d);
					putchar(n);
					if (i == '7' && d == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
