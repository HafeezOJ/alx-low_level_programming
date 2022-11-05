#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program execution starts here
 *
 *@argc: number of arguments
 *@argv: values of arguments
 *
 * Description: adds 2 numbers
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc - 1  == 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 0; i < argc; i++)
	{
		if (i != 0)
		{
			if (isdigit(argv[i]))
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
