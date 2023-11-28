#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: file content
 *
 * Return: 1 (Success). -1 (fails)
 */

int create_file(const char *filename, char *text_content)
{
int FD; /*file descriptor*/
int nol; /*nol - number of letters*/
int rwr;

if (!filename)
	return (-1);

FD = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (FD == -1)
	return (-1);

if (!text_content)
	text_content = "";

for (nol = 0; text_content[nol]; nol++)
	;

rwr = write(FD, text_content, nol);

if (rwr == -1)
	return (-1);

close(FD);
return (1);
}
