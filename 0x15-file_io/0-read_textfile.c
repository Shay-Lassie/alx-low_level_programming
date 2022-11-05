#include "main.h"

/**
 * read_textfile - read text file and print to POSIX STDOUT
 * Description: counts number of letters it should and does read and print
 * @filename: text file to read
 * @letters: number of letters
 * Return: 0 if file corrupt, 0 if output is corrupt, NULL if file name is nu;ll
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int rd;
	int wr;
	char *buf;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buf = malloc(sizeof(char) * letters + 1);

	if (buf == NULL)
		return (0);

	rd = read(file, buf, letters);
	if (rd == -1)
		return (0);

	buf[letters] = '\0';

	wr = write(1, buf, rd);
	if (wr == -1)
		return (0);

	close(file);
	free(buf);

	return (wr);
}
