#include "holberton.h"

/**
 * read_textfile - a function that reads a
 * text file and prints it to the POSIX standard output
 * @filename: of the file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	register int o, r, w;
	register char *buffer = malloc(sizeof(char)  * letters);

	if (!(buffer))
	{
		free(buffer);
		return (0);
	}
	if (!(filename))
	{
		return (0);
	}
	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || !(w == r))
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);
	return (w);
}



