#include "main.h"

/**
 * append_text_to_file- appends to file
 * @filename: name of file
 * @text_content: string to add
 *
 * Return: 1 on success -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, i, j;

	j = 0;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp < 0)
		return (-1);

	while (text_content != NULL)
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
