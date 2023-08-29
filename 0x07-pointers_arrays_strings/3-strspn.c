#include "main.h"

/**
 * _strspn - change pointer value
 *
 * @accept : char parameter
 * @s : char parameter
 *
 * Return: Always 0 (Success)
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int iteration, je;

	for (iteration = 0; s[iteration] != '\0' ; iteration++)
	{
		for (je = 0; s[iteration] != accept[je] ; je++)
		{
			if (accept[je] == '\0')
				return (iteration);
		}
	}

	return (iteration);

}
