#include <stdlib.h>
/**
* rollback - free allocate array
* @arr: array
* @size: number of elements to free
*/
void rollback(int **arr, int size)
{
	int i;

	for (i = 0; i < size; i++)
		free(arr[i]);
	/*end-for*/

	free(arr);
}

/**
* alloc_grid - allocate a grid of integers
* @width: horizontal
* @height: vertical
* Return: allocated grid
*/
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			rollback(grid, i);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	/*end-for*/

	return (grid);
}
