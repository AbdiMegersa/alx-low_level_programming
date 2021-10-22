#include "main.h"
#include <stdlib.h>
/**
 * append_text_to_file - appends file to text.
 * @filename: name of the file
 * @text_content: content of the file
 *
 * Return: 1 0r -1
 */
int appent_text_to_file(const char *filename, char *text_content)
{
	int file, i, rw;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_EXCL | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		i = 0;
		while (text_content[i])
			i++;
		wr = write(filename, text_content, i);
		if (wr == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
