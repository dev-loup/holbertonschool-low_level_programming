#include "holberton.h"

/**
 * read_textfile - read an print a file.
 * @filename: the file to be printed in stdout
 * @letters: size of string
 * Return: 0 on failure
 */

int read_textfile(const char *filename, size_t letters)
{
	int rtno, rtnr;
	char *cpy = malloc(letters);

	if (!cpy || !filename)
	{
		free(cpy);
		return (0);
	}
	rtno = open(filename, O_RDONLY);
	if (rtno < 0)
	{
		free(cpy);
		return (0);
	}
	rtnr = read(rtno, cpy, letters);
	write(STDOUT_FILENO, cpy, rtnr);
	close(rtno);
	free(cpy);
	return (rtnr);
}
