#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a two dimensional array
 * @width: width of the matrix
 * @height: height of the matrix
 * 
 * Return: pointer to the matrix (Success), or NULL (Error)
 */

int **alloc_grid(int width, int height)
{
    int **m;
    int l, c;
    if (width <= 0 || height <= 0)
    {
        return (NULL);
    }
    m = (int**) malloc(height * sizeof(int*));
    if (m == NULL)
    {
        return (NULL);
    }
    for (l = 0; l < height; l++)
    {
        *(m + l) = (int*) malloc(width * sizeof(int));
        if (*(m + l) == NULL)
        {
            return (NULL);
        }
    }
    for (l = 0; l < height; l++)
    {
        for (c = 0; c < width; c++)
        {
            *(*(m + l) + c) = 0;
        }
    }
    return (m);
}
