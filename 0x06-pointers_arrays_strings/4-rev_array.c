#include "main.h"

/**
 * reverse_array - a function that reverses
 * the content of an array of int
 * @a: input array
 * @n: elements of content
 *
 */ 
void reverse_array(int *a, int n)
{
	int i, k;

	for (i = 0; i < n; i++)
	{
		n--;
		k = a[i];
		a[i] = a[n];
		a[n] = k;
	}
}
