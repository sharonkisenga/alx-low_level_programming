#include "main.h"
/**
 * append_text_to_file - appends text at the end
 * @filename: name of the file
 * @text_content: add the string at the end of the file
 * return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, s, len;

	if (filename == NULL)
	return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	i = open(filename, O_WRONLY | O_APPEND);
	s = write(i, text_content, len);
	if (i == -1 || s == -1)
	return (-1);
	close(i);
	return (1);
}
