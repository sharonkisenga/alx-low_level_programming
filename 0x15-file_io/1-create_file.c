#include "main.h"
/**
 * create_file - creates file
 * @filename: include the filename
 * return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fc;
	int x;
	int letters = 0;

	if (filename == NULL)
	return (-1);
	if (text_content != NULL)
	{
	for (letters = 0; text_content[letters];)
		letters++;
	}
	fc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(fc, text_content, letters);
	if (fc == -1 || x == -1)
		return (-1);
	close(fc);
	return (1);
}

