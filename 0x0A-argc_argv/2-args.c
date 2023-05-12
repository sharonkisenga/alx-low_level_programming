#include "main.h"
#include <stdio.h>
/**
 * main - print all argument it receives all argument should be printed includind the fiest one
 * @argc: argument count
 * @argv: argument vector
 * return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
