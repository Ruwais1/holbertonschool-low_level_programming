#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CX "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk"

/**
 * main - generates a key for the crackme5 executable
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int len, i, tmp;
	char p[7];

	if (argc != 2)
	{
		printf("Usage: %s username\n", argv[0]);
		return (1);
	}
	len = strlen(argv[1]);
	p[0] = CX[(len ^ 59) & 63];
	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += argv[1][i];
	p[1] = CX[(tmp ^ 79) & 63];
	tmp = 1;
	for (i = 0; i < len; i++)
		tmp *= argv[1][i];
	p[2] = CX[(tmp ^ 85) & 63];
	tmp = argv[1][0];
	for (i = 0; i < len; i++)
		if (argv[1][i] > tmp)
			tmp = argv[1][i];
	srand(tmp ^ 14);
	p[3] = CX[rand() & 63];
	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += (argv[1][i] * argv[1][i]);
	p[4] = CX[(tmp ^ 239) & 63];
	for (i = 0; i < argv[1][0]; i++)
		tmp = rand();
	p[5] = CX[(tmp ^ 229) & 63];
	p[6] = '\0';
	printf("%s", p);
	return (0);
}
