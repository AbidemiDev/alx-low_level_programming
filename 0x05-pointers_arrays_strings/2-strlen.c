#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int count_string = 0;

	while (*(s + count_string) != '\0')
		count_string++;
	return (count_string);
}
