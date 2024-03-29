#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @src: source string to copy.
 * @dest: destination of copy to string.
 * Return: The pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for ( ; src[i] != '\0'; i++)
	{
		dest[i] = src[i];

	}
	dest[i] = '\0';
	return (dest);

}
