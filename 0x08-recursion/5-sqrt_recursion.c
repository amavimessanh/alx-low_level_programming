#include "main.h"

/**
 * sqrt2 - found saquare
 * @a: integer
 * @b: integer
 * 
 * Return: value square.
 *
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: value square
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
