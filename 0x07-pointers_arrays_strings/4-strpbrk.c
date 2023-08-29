#include "main.h"

/**
 * *_strpbrk - change pointer value
 *
 * @s : char parameter
 * @accept :char parameter
 *
 * Return: Always 0 (Success)
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int iteration, je;

iteration = 0;
	while (s[iteration] != '\0')
	{
		for (je = 0; accept[je] != '\0'; je++)
		{
			if (s[iteration] == accept[je])
			{
			x = &s[iteration];
	return (x);
			}
je++;
		}
iteration++;	
}
	return (0);
}
