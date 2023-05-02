#include <stdio.h>
/**
 * _strlen - print a function that returns the length of a string
 * @str: the string to get the length of
 * return: the length of @str
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
