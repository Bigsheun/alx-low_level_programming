#include <stdlib.h>
/**
* array_iterator - performs task on elements of array
* @array: array in question
* @size: size of array
* @action: function to perfom the task
*
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
