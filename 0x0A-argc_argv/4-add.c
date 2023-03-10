#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - A program that adds positive numbers
 * @argc: The argument counter
 * @argv: The argument value
 * Return: 0
 */
int main(int argc, char **argv)
{
	int n, r = 0, i;
	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		n = atoi(argv[argc]);
		r += n;
	}
	printf("%d\n", r);
	return (0);
}
