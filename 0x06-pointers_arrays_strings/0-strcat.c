#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int append = 0;
	int count2 = 0;

	while (*(dest + append) != '\0')
	{
		append++;
	}

	while (count2 >= 0)
	{
		*(dest + append) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		append++;
		count2++;
	}
	return (dest);
}
