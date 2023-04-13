#include "main.h"

/**
 * append_text_to_file - appends text at a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists else -1.
 * Done by Florien.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a;
	int n;
	int rwr;

	if (!filename)
		return (-1);

	a = open(filename, O_WRONLY | O_APPEND);
	if (a == -1)
		return (-1);

	if (text_content)
	{
		for (n = 0; text_content[n]; n++)
                 ;			
		rwr = write(a, text_content, n);

		if (rwr == -1)
			return (-1);
	}
	close(a);

	return (1);
}
