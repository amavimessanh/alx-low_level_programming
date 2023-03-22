#include "function_pointers.h"

/**
  * int_index - that searches for an integer
  * @array: array
  * @size: size of elements in array
  * @cmp: pointer
  *
  * Return: If no element matches, return -1
  * If size <= 0, return -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
