#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - entry point
 * @s: input
 * @accept: input
 * return: always 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
        int j, n;

        for (j = 0; s[j] != '\0'; j++)
        {
        for (n = 0; accept[n] != '\0'; n++)
        {
                if (s[j] == accept[n])
                        return (s + j);
        }
        }
        return (NULL);
}
~                                                   
