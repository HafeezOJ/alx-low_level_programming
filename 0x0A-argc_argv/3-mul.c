#include <stdio.h>
#include <stdlib.h>
/**
 * main - program execution starts here
 *
 *@argc: number of arguments
 *@argv: values of arguments
 *
 * Description: multiplies arguments
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc - 1 < 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; i < argc; i++)
		if (i != 0)
			product = product * atoi(argv[i]);
	printf("%d\n", product);
	return (0);
}
