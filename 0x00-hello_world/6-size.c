#include <stdio.h>
/**
 * main	- prints the size of various types in C
 *
 * Return:0
*/
int main(void)
{
	printf("Size of a char: %d byte(S)\n", sizeof(char));
	printf("Size of a int: %d byte(S)\n", sizeof(int));
	printf("Size of a long int: %d byte(S)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(S)\n", sizeof(long long int));
	printf("Size of a float: %d byte(S)\n", sizeof(float));
	return (0);
}
