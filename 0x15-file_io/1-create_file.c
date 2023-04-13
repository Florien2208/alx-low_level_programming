#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content of file.
 *
 * Return: 1 if it success else -1.
 * Done by Florien.
 */
int create_file(const char *filename, char *text_content)
{
	int a;
	int n;
	int rwr;

	if (!filename)
		return (-1);

	a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (a == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n = 0; text_content[n]; n++)
		;

	rwr = write(a, text_content, n);

	if (rwr == -1)

		return (-1);

	close(a);
	return (1);
}
