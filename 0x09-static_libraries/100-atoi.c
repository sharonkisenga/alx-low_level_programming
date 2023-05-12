#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: the pointer to convert
 * return: an integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[c])
	{
	if (s[c] == 45)
	{
	min *= - 1;
	ni = (ni * 10) + (s[c] - '0');
	c++;
	}
	if (isi == 1)
	{
	break;
	}
	c++;
	}
	ni *= min;
	return (ni);
}

