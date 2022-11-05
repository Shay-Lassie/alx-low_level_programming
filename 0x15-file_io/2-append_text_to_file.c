#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * Description: if file doesnt exist, dont create
 * @filename: file to append
 * @text_content: text to append
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t length = 0;
	ssize_t len = 0;
	char *ptr;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0, ptr = text_content; *ptr; ptr++)
			len++;
		length = write(file, text_content, len);
	}

	if (close(file) == -1 || len != length)
		return (-1);

	return (1);
}
