#include "main.h"
/**
 * append_text_to_file - appends text at the end 
 * @filename: filename
 * return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fc;
	int letters;
	int r;

	if (!filename)
		return (-1);
	fc = open(filename, O_WRONLY | O_APPEND);
	if (fc == -1)
		return (-1);
	if (text_content)
	{
	for (letters = 0; text_content[letters]; letters)
		r = write(fd, text_content, letters);
	if (r == -1)
		return (-1);
	}
	close(fc);
	return (1);
}
