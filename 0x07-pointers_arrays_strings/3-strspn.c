#include "main.h"
/**
 * _strspn - print the consecutive character of s1 that are in s2
 * @s: input
 * @sccept: input
 * return: always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int index;

	for (j = 0; *s(s + j); j++)
	{
	for (i = 0; *(accept + i); i++)
	{
	if (*(s +j) == *(accept +i))
		break;
	}
	if (*(accept + i) == '\0')
		break;
	}
		return (j);
}
