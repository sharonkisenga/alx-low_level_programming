#include "main.h"
/**
 * _memcpy - entry point
 * @dest: input
 * @src: input
 * @n: input
 * return: always 0 (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int j;

        for (j = 0; j < n; j++)
                dest[j] = src[j];
        return (dest);
}
~                                      
