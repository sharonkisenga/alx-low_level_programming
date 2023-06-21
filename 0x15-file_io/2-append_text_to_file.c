#include "main.h"
/**
 * append_text_to_file - appends text at the end
 * @filename: text at the end
 * return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int *filename;
	int *textcontent;
	char buff[256];
	
	filename=open("myfilename.txt", "r");
	textcontent=open("mytextcontent.txt", r+);
	if (filename==NULL)
	{
	perror("Error opening file.");
	}
	else 
	{
	while (!feof(filename))
	{
	if (fgets(buff, 100, filename) != NULL) 
	{
	lseek(textcontent, -100, SEEK_END);
		fprintf(textcontent, buff0);
	}
	close(filename);
	close(textcontent);
	}
	}
}
