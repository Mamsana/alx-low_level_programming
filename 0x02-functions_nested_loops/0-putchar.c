#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints _putchar
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	char c;
	char s[] = "_putchar";

	while (i <= 7)
	{
		c = s[i];
		putchar(c);
		i++;
	}
	putchar('\n');
	return (0);
}
