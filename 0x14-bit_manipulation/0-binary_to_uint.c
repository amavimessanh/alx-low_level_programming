#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: char beig evaluated
 *
 * Return:converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int k = 0;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		k <<= 1;
		if (b[i] == '1')
			k += 1;
	}
	return (k);
}
