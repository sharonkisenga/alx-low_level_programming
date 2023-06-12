#include "main.h"
/**
 * create_file - create file
 * @filename: show the name of the file to  create
 * @@text_content: string to write to the file
 * return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int i, s, len;

	if (filename == NULL)
	return (-1);
	if (text_content != NULL)
	{
	for (len = 0; text_content[len];)
		len++;
	}
	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	s = write(i, text_content, len);
	if (i == -1 || s == -1)
	return (-1);
	close(i);
	return (1);
}

