#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: pointer dest
 * @src: pointer src
 * @n: number of bytes
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
