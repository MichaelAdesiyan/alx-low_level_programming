#include "function_pointers.h"
/**
 * array_iterator - executincon on array
 * @array: array to execute
 * @size: size of the array
 * @action: print function to array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
