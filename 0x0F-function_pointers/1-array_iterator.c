#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 *
 * @array: array
 * @size:the size of array
 * @action: the pointer to function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
		return;

	while (size--)
		action(*array++);
}
