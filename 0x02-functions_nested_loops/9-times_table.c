#include "main.h"
/**
 * times_table - check the code.
 * Return: nothing.
 */
void times_table(void)
{
	int i, d, n;

	for (i = 0; i <= 9; i++)
	{
		for (d = 0; d <= 9; d++)
		{
			n = i * d;

			if ((n / 10) == 0)
			{
				if (d != 0)
					_putchar(' ');
				_putchar(n + '0');

				if (d == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				if (d == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
