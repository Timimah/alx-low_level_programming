#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: stores a string
 *
 * Return: 0 (i.e. success)
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
