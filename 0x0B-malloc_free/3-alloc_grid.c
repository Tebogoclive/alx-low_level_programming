#include "main.h"

/**
 * alloc_grid - Creates 2 dimensional array of ints
 * @width: width
 * @height: height
 * Return: Pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (y = 0; y < height; y++)
	{
		p[y] = malloc(sizeof(int) * width);

		if (p[y] == NULL)
		{
			for (x = y; x >= 0; x--)
			{
				free(p[x]);
			}
			free(p);
			return (NULL);
		}
	}

	for (y = 0; y < height; y++)
	{
		for (x = 0; x < width; x++)
		{
			p[y][x] = 0;
		}
	}

	return (p);
}
