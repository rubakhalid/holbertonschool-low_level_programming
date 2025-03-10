#include  "main.h"
#include <stdlib.h>

/**
* alloc_grid - Allocates a 2D array of integers and initializes all
* @width: The number of columns
* @height: The number of rows
*
* Return: Pointer to the allocated 2D array, or NULL on failure
*/
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == NULL)
{
while (i > 0)
{
free(grid[i - 1]);
i--;
}
free(grid);
return (NULL);
}
for (j = 0; j < width; j++)
grid[i][j] = 0;
}

return (grid);
}
