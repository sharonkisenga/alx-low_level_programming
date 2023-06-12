#include "main.h"
#include <stdlib.h>
/**
 * read_textfiles - read atext file and print it to the FOSIX
 * @filename: the neme of the file
 * @letters: it should read and print number of letters
 * return: return 0 if the file can not be opened or read or if is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t s, p, q;
	char *buff;

	if (filename == NULL)
	return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	return (0);
	s = open(filename, O_RDONLY);
	p = read(s, buff, letters);
	q = write(STDOUT_FILENO, buff, p);
	if (s == -1 || p == -1 || q == -1 || q != p)
	{
	free(buff);
	return (0);
	}
	free(buff);
	close(s);
	return (q);
}
