#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocate 1024 bytes
 * @file: the name of the file buffer is storing chars for
 * return: pointer to the newly allocated buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

		buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
			exit(99);
	}
	return (buffer);
}
/**
 * close_file - close files descriptors
 * @fd: file descriptors
 */
void close_file(int fd)
{
	int e;

	e = close(fd);
	if (e == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the content of the file to an other file
 * @argc: number of argument supplied
 * @argv: array of pointer to argument
 * return: 0 success
 * description: if the argument count is incorrect - exit code 97
 * if the file can not read exit 98
 * if the file can not be created exit 99
 * if the file can not close exit 100
 */
int main(int argc, char *argv[])
{
	int apartir, de, d, t;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
	}
	buffer = create_buffer(argv[2]);
	apartir = open(argv[1], O_RDONLY);
	d = read(apartir, buffer, 1024);
	de = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
	if (apartir == -1 || d == -1)
	{
	dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
	free(buffer);
	exit(98);
	}
	t = write(de, buffer, d);
	if (de == -1 || t == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write %s\n", argv[2]);
		free(buffer);
			exit(99);
	}
	d = read(apartir, buffer, 1024);
	de = open(argv[2], O_WRONLY | O_APPEND);
	}
	while (d > 0);
	free(buffer);
	close_file(apartir);
	close_file(de);
	return (0);
}


