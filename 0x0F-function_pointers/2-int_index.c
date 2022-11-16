/**
* int_index - index finder
* @array: array search
* @size: size of array
* @cmp: function to do comparison
*
* Return: index at which first deviation detected
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	while (cmp(array[i]) == 0 && i < size)
		i++;

	if (i < size)
		return (i);
	else
		return (-1);
	/*end-if*/
}
