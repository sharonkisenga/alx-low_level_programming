#include "main.h"
/**
 * _strncpy - print a function that copies a string
 * @dest: the buffer storing the string copy
 * @src: the source string
 * @n: the maximum number of bytes to copies from src
 * return: always dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
