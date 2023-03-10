#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function
 * @argc: argumentc
 * @argv: vector of arguments
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!(argv[i][0] >= '0' && argv[i][0] <= '9')
		    && argv[i][0] != '-')
		{
			printf("Error\n");
			return (1);
		}
		for (j = 1; argv[i][j] != 0; j++)
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
	}

	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);
	printf("%d\n", sum);

	return (0);
}
