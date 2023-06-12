#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * read_textfile- reads textfile and prints the posix standard output
 * @filename: file pointer
 * @letters: number of letters it should read and print
 *
 * Return: numbers it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, rd;
	char *buff = malloc(sizeof(char *) * letters);

	if (buff == 0)
		return (0);

	if (filename == 0)
		return (0);

	fp = open(filename, O_RDONLY, 0600);

	if (fp == -1)
		return (0);

	rd = read(fp, buff, letters);
	write(STDOUT_FILENO, buff, rd);

	free(buff);
	close(fp);
	return (rd);
}
