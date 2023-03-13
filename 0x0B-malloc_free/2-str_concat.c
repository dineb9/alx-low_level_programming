#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return:  NULL on failure
 **/
char *str_concat(char *s1, char *s2)
{
	int i, j, k, e, count;
	int a = 0;
	int b = 0;
	char *q;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		a = a + 1;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		b = b + 1;
	}
	count = a + b;
	q = malloc(sizeof(char) * count + 1);
	if (q == NULL)
	{
		return (NULL);
	}
	for (k = 0; s1[k] != '\0'; k++)
	{
		q[k] = s1[k];
	}
	for (k = k, e = 0; s2[e] != '\0'; e++, k++)
	{
		q[k] = s2[e];
	}
	q[k] = '\0';
	return (q);
}
