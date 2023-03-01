#include "main.h"
#include <stdio.h>
/**
 * rot13 - encode using rot13
 * @s: input string
 *
 * Return: s
 */
char *rot13(char *s)
{
	int i = 0, j = 0;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alpha2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + i) != 0)
	{
		for (j = 0; j <= 52; j++)
		{
			if (*(s + i) == alpha[j])
			{
				*(s + i) = alpha2[j];
				break;
			}
		}
				i++;
	}
		return (s);
}
