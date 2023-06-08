#include "main.h"
/**
 * get_andiannes -checks the endiannes
 * return: 0 if big endian 1 if little endian
 */
int get_endianness(void)
{
	int chic = 1;
	char *endian = (char *)&chic;

	if (*endian == 1)
	return (1);
	return (0);
}
