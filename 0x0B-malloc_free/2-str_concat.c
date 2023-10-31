#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: secomd string
 *
 * Return: s1 + s2
 */

char *str_concat(char *s1, char *s2)
{
char *conc;
int i, j;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s1 == NULL)
	{
		s2 = "";
	}
	i = j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	conc = malloc(sizeof(char) * (i + j + 1));
	if (conc == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		conc[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		conc[i] = s2[j];
		i++, j++;
	}
	conc[i] = '\0';
	return (conc);
}
