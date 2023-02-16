#include <stdio.h>
/**
 * main	- prints the size of various types in C
 *
 * Return:0
*/
int main(void)
{
	char c;
	int i;
	long int u;
	long long int v;
	float f;

	printf("size of a char: %lu byte(s)\n",	(unsigned long)sizeof(c));
	printf("size of a int: %lu byte(s)\n",	(unsigned long)sizeof(i));
	printf("size of a long int: %lu byte(s)\n",	(unsigned long)sizeof(u));
	printf("size of a lon long int: %lu byte(s)\n",	(unsigned long)sizeof(v));
	printf("size of a float: %lu byte(s)\n",	(unsigned long)sizeof(f));
	return (0);
}
