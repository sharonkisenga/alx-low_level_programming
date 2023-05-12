#include "main.h"
#include <stdio.h>
/**
 * main - print the number of argument passed on it
 * @argc: argument count
 * @argv: argument vector
 * return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
