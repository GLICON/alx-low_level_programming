#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name
 * @text_content: added content
 *
 * Return: 1 (if file exists) -1 (if it fails)
 */

int append_text_to_file(const char *filename, char *text_content)
{
int FD;
int nol;
int rwr;

if (!filename)
	return (-1);

FD = open(filename, O_WRONLY | O_APPEND);

if (FD == -1)
	return (-1);

if (text_content)
{
	for (nol = 0; text_content[nol]; nol++)
		;

	rwr = write(FD, text_content, nol);
	if (rwr == -1)
		return (-1);
}
close(FD);
return (1);
}
