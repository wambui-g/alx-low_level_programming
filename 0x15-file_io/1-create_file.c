#include "main.h"

/**
 * create_file- creates a file
 * @filename: name of file to create
 * @text_content: null termiated string to write to file
 *
 * Return: 1 success and -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int i, fp;
	int j = 0;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fp < 0)
		return (-1);

	while (text_content)
	{
		while (text_content[j])
			j++;
		i = write(fp, text_content, j);
		if (i != j)
			return (-1);
	}
	close(fp);

	return (1);
}
