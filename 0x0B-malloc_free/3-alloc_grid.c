#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width
 * @height: height
 *
 * Return: array pointer
 */

int **alloc_grid(int width, int height)
{
int **wh, i, j;

if (width <= 0 || height <= 0)
{
	return (NULL);
}

wh = malloc(sizeof(int *) * height);

if (wh == NULL)
{
	return (NULL);
}
for (i = 0; i < height; i++)
{
	wh[i] = malloc(sizeof(int) * width);
	if (wh[i] == NULL)
	{
		for (; i >= 0; i--)
		{
			free(wh[i]);
		}
		free(wh);
		return (NULL);
	}
}

for (i = 0; i < height; i++)
{
	for (j = 0; j < width; j++)
		wh[i][j] = 0;
}
return (wh);
}
