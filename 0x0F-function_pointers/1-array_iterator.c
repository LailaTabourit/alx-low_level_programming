#include "function_pointers.h"

/**
* array_iterator - a function given as a parameter on each element
* @array: array
* @size: size of array
* @action: pointer
*
* by: lailitaaa
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
