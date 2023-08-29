#include "main.h"

/**
 * _strstr - Locates substring.
 * @haystack: the string is being searched.
 * @needle: the substring located.
 *
 * Return: If the substring located - pointer to beginning of the substring.
 * If the substring is not located - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int index1:

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		index1 = 0;

		if (haystack[index1] == needle[index1])
		{
			do {
				if (needle[index1 + 1] == '\0')
					return (haystack);
				index1++;

			} while (haystack[index1] == needle[index1]);
		haystack++;
		}
	return ('\0');
}
