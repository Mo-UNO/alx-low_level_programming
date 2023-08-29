#include "main.h"

/**
 *  *_memcpy - change pointer value
 *
 * @src : char parameter
 * @dest : char parameter
 * @n : int parameter
 *
 * Return: Always 0 (Success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int iteration;

	for (iteration = 0; iteration < n; iteration++)
	{
		dest[iteration] = src[iteration];
	}

	return (dest);
}
