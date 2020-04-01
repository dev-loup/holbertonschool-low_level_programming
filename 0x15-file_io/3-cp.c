#include "holberton.h"

/**
 * create_file - creates a file with a descripted content.
 * @filename: the file name
 * @text_content: content to put in the file
 * Return: 0 on failure
 */

void creater_file(const char *filename, char *fileorigin)
{
	char cpy[1024];
	int rtno, rtno2, rtnr, rtnw;

	rtno = open(fileorigin, O_RDONLY);
	rtno2 = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	rtnr = read(rtno, cpy, 1024);

	if (rtnr == -1 || rtno == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
		       fileorigin);
		exit (98);
	}
	while (rtnr > 0)
	{
		rtnw = write(rtno2, cpy, rtnr);
		if (rtnw < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n",
				filename);
			exit (99);
		}
		rtnr = read(rtno, cpy, 1024);
	}
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s filename text\n", av[0]);
		exit(97);
	}
	creater_file(av[2], av[1]);

	return (0);
}
