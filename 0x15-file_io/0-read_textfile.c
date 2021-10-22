#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * ssize_t read_textfile - reads file and print the content of the file
 * @filename: name of the file
 * @letter: number of the size
 *
 * Return: letter or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);
	
	int opener;
	char *reader;
	int Read;
	int Write;

	opener = open(filename, O_RDONLY);
	if (opener == -1)
		return (0);
	reader = malloc(sizeof(reader) * letters + 1);
	if (reader == NULL)
		return (0);
	Read = read(opener, reader, letters);
	if (Read == -1)
		return (0);
	reader[letters] = '\0';

	Write = write(STDOUT_FILENO, reader, Read);
	if (Write == -1)
		return (0);
	close(opener);
	free(reader);
	return (Write);
}
