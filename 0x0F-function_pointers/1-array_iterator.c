#include <stdlib.h>

/**
 * array_iterator -  function that executes a function given as a parameter on each element of an array
 * @array: a pointer to array
 * @size: size of the array
 * @action: a pointer to the function you need to use
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;

	for (; i < size; i++)
		action(array[i]);
}
