#include<stdio.h>

int main()
{
	int a, i, j, k;
	scanf_s("%d", &a);
	for (i = 1; i <= a - 1; i++)
	{
		k = a - i;
		for (j = 1; j <= i; j++) printf("* ");
		for (j = 1; j <= 2 * k - 1; j++) printf("  ");
		for (j = 1; j <= i; j++) printf("* ");
		printf("\n");
	}
	for (i = 1; i <= a * 2 - 1; i++) printf("* ");
	printf("\n");
	for (i = 1; i <= a - 1; i++)
	{
		k = a - i;
		for (j = 1; j <= k; j++) printf("* ");
		for (j = 1; j <= 2 * i - 1; j++) printf("  ");
		for (j = 1; j <= k; j++) printf("* ");
		printf("\n");
	}
	return 0;
}