#include "main.h"

/**
 * create_file - creates a file
 * Description: must have the 600 permission
 * @filename: namre of fie to be created
 * @text_content: what to put in the file
 * Return: 1 on succes and -1 error
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	int length = 0;
	int len = 0;
	char *ptr;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file == -1 )
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
