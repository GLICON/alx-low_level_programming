#include "main.h"

/**
 * cap_string - A function that capitalizes all words of a string.
 * @str: The inputed string.
 *
 * Return: A pointer to the changed string.
 */

char *cap_string(char *str)
{
	int ind = 0;

	while (str[ind])
	{
		while (!(str[ind] >= 'a' && str[ind] <= 'z'))
			ind++;

		if (str[ind - 1] == ' ' ||
		    str[ind - 1] == '\t' ||
		    str[ind - 1] == '\n' ||
		    str[ind - 1] == ',' ||
		    str[ind - 1] == ';' ||
		    str[ind - 1] == '.' ||
		    str[ind - 1] == '!' ||
		    str[ind - 1] == '?' ||
		    str[ind - 1] == '"' ||
		    str[ind - 1] == '(' ||
		    str[ind - 1] == ')' ||
		    str[ind - 1] == '{' ||
		    str[ind - 1] == '}' ||
		    ind == 0)
			str[ind] -= 32;

		ind++;
	}

	return (str);
}
