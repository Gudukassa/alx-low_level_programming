#include "main.h"

/**
 * _islower - Checks for lowercase character.
 * @c: character to be checked.
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);

	}
	else
	{
		return (0);

	}
	_putchar ('\n');

}
