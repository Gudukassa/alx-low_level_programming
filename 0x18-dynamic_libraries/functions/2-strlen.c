#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: string.
 * Return: length of @s.
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;

	}
	return (i);

}
