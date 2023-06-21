#include "main.h"
/**
 * append_text_to_file - appends text at the end
 * @filename: text at the end
 * return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int sha;
	int ron;
	int sharon = 0;

	if (filename == NULL)
	return (-1);
	if (text_content != NULL)
	{
	for (sharon = 0; text_content[sharon];)
		sharon++;
	}
	sha = open(filename, O_WRONLY | O_APPEND);
	ron = write(sha, text_content, sharon);
	if (sha == -1 || ron == -1)
		return (-1);
	close(sha);
	return (1);
}

