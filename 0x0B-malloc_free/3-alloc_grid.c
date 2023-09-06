#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate memory for a 2D array and initialize with zeros
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to a 2D array (grid) or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **mee;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		mee[x] = malloc(sizeof(int) * width);

		if (mee[x] == NULL)
		{
			for (y = 0; y < x; y++)
				free(mee[y]);

			free(mee);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			mee[x][y] = 0;
	}

	return (mee);
}
