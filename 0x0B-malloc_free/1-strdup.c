#include "main.h"
#include <stdlib.h>
/**
 * *_strdup -  function returns a pointer to a new string which is a duplicate of the string str
 * @str: string to copy
 * Return: NULL if str = NULL
 **/
char *_strdup(char *str)
{
	char *r;
	int i, j;
	int count = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		count = count + 1;
	}
	r = malloc(sizeof(char) * count + 1);
	if (r == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0' ; j++)
	{
		r[j] = str[j];
	}
	r[j] = '\0';
	return (r);
}
