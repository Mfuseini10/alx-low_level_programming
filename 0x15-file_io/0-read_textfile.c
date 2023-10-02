#include "main.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file to read
 * @letters: num of letters to read
 * Return: total_w- num of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t total_w;
	ssize_t bytes_read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	bytes_read = read(fd, buff, letters);
	total_w = write(STDOUT_FILENO, buff, bytes_read);
	free(buff);
	close(fd);
	return (total_w);
}
