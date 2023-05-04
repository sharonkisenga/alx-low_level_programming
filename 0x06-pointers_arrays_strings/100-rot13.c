#include "main.h"
#include <stdio.h>
/**
 * rot13 - print a function that encoder rot13
 * @s: pointer to atring params
 * return: *s
 */
char *rot13(char *s)
{
	int k, l;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMNnopqrstuvwxyzabcdefghijklm";

	for (k = 0; s[k] != '\0'; k++)
	{
	for (l = 0; l < 52; l++)
	{
	if (s[k] == data1[l])
	{
		s[k] = datarot[l];
		break;
	}
	}
	}
	return (s);
}
