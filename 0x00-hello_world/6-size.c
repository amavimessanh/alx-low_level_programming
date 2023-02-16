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
	long int l;
	long long int t;
	float f;

	printf("size of a char: %lu byte(S)\n", (unsigned long)sizeof(c));
	printf("size of a int: %lu byte(S)\n", (unsigned long)sizeof(i));
	printf("size of a long int: %lu byte(S)\n", (unsigned long)sizeof(l));
	printf("size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(t));
	printf("size of a float: %lu byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}
