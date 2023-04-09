#include "main.h"

/**
 * append_text_to_file - append file text
 * @filename: name of file to be created
 * @text_content: string to write to the file
 * Return: 1 if correct
 * -1 if wrong
 * if text_content is NULL, add nothing
 */
int append_text_to_file(const char *filename, char *text_content)
{
	/* create variables to open, write and find length of str */
	int op, wr, str_len = 0;

	/* set fail condition for filename */
	if (filename == NULL)
		return (-1);
	/* find length of text_content */
	if (text_content != NULL)
	{
		for (str_len = 0; text_content[str_len];)
			str_len++;
	}
	/* open, write and append to file */
	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, str_len);
	/* set fail conditions */
	if (op == -1 || wr == -1)
		return (-1);
	/* close file */
	close(op);

	return (1); /* if correct */
}
