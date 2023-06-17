#include "main.h"
#include <stdlib.h>

/**
 * read_texfile - reads a text file and prints it 
 * @letters: pointer to an array containing file 
 * return: 0 if fails or does not read the file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int d;
	size_t p, f;

	if (!filename)
		return(0);
	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	buff = malloc(sizeof(char) * (letters));
       if (!buff)
       return (0);
	p = read(d, buff, letters);
        f = write(STDOUT_FILENO, buff, p);
        close(d);
        free(buff);
        return (f);
}
