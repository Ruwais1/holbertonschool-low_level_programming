#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long f1 = 1, f2 = 2, next, i;
	unsigned long h1, h2, hn, t1, t2, tn;
	unsigned long limit = 1000000000;

	printf("%lu, %lu", f1, f2);
	for (i = 3; i < 93; i++)
	{
		next = f1 + f2;
		f1 = f2;
		f2 = next;
		printf(", %lu", next);
	}
	h1 = f1 / limit;
	t1 = f1 % limit;
	h2 = f2 / limit;
	t2 = f2 % limit;
	for (i = 93; i <= 98; i++)
	{
		hn = h1 + h2;
		tn = t1 + t2;
		if (tn >= limit)
		{
			hn++;
			tn %= limit;
		}
		printf(", %lu%lu", hn, tn);
		h1 = h2;
		t1 = t2;
		h2 = hn;
		t2 = tn;
	}
	printf("\n");
	return (0);
}
