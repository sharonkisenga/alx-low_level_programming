#include "main.h"
/**
 * create_file - creates file
 * @filename: include the filename
 * return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fc;
	int letters;
	int x;

	if (!filename)
	return (-1);
	fc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if  (fc == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (letters = 0; text_content[letters]; letters++)
		x = write(fc, text_content, letters);
	if (x == -1)
		return (-1);
	close(fc);
	return (1);
}
	
