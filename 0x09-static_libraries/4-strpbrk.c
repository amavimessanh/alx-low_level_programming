#include "main.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 *
 * @s: char
 * @accept:  pointer
 *
 * Return: a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 *
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int counter;

	for (; *s != '\0'; s++)
	{
		for (counter = 0; accept[counter] != '\0'; counter++)
		{

			if (*s == accept[counter])
				return (s);
		}
	}
	return (0);
}
