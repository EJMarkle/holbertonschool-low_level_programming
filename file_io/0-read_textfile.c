#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytes_read = fread(buffer, sizeof(char), letters, file);
	if (bytes_read == -1)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	/* null terminates the buffer to treat it as a string */
	buffer[bytes_read] = '\0';

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	fclose(file);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
