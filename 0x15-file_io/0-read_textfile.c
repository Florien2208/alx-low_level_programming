#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters.
 * Return: numbers of letters printed. It fails, returns 0.
 * Done by Florien.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int a;
	ssize_t nr, nw;
	char *buf;

	if (!filename)
		return (0);

	a = open(filename, O_RDONLY);

	if (a == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nr = read(a, buf, letters);
	nw = write(STDOUT_FILENO, buf, nr);

	close(a);

	free(buf);

	return (nw);
}

