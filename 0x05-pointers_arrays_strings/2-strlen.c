#include "main.h"
#include <string.h>

/**
 * _strlen - Returns the length of a string
 * @s: character var
 * Return: 0
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
