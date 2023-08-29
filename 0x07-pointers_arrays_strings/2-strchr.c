#include "main.h"

/**
 *  *_strchr - change pointer value
 *
 * @c : char parameter
 * @s : string parameter
 *
 * Return: Always 0 (Success)
*/

char *_strchr(char *s, char c)
{
	unsigned int iteration;

	for (iteration = 0; s[iteration] >=  '\0'; iteration++)
	{
		if (s[iteration] == c)
			return (s + iteration);
	}

	return ('\0');
}
