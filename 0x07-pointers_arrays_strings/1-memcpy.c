#include "main.h"

/**
 * _memcpy - copies memory area.
 *
 * @dest: char pointer
 * @src: char pointer
 * @n: byte
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n --;
	}
	return (dest);
}
