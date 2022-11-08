#include <stdlib.h>
/**
* free_grid - de-allocate a grid of pointers
* @grid: grid of pointers
* @height: number of pointers (of pointers)
*
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	/*end -for*/

	free(grid);
}

