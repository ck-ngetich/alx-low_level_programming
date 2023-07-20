#include "function_pointers.h"
/**
 * int_index - return places of comparison
 * @array: the array to print
 * @size: size of an element in an array
 * @cmp: pointer of one function in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]))
			return (n);
	}
	return (-1);
}
