#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - program execution starts here
 *
 * @argc: number of arguments
 * @argv: values of arguments
 *
 * Description: adds arguments
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i, j, l, sum = 0;

	if (argc - 1  == 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 0; i < argc; i++)
	{
		if (i != 0)
		{
			l = strlen(argv[i]);

			for (j = 0; j < l; j++)
			{
				if (!isdigit(argv[i][j]))
					printf("Error\n");
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
