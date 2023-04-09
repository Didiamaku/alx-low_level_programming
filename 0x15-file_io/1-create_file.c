#include "main.h"

/**
 * create_file - create file
 * @filename: name of the file to create
 * @text_content: A string to write to said file
 * Return: 1 if correct
 * -1 if wrong
 * if text_content is NULL, create empty file
 */
int create_file(const char *filename, char *text_content)
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
	/* open, create, write and set file */
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, str_len);
	/* set fail conditions */
	if (op == -1 || wr == -1)
		return (-1);
	/* close file */
	close(op);

	return (1); /* if correct */
}
