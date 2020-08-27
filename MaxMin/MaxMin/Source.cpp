#include<stdio.h>

int main()
{
	int a[100],b,i=0,max=-99999,min=99999;
	scanf_s("How many numbers -> %d", &b);
	while (i < b)
	{
		scanf_s("%d", &a[i]);
		if (a[i] >= max) max = a[i];
		if (a[i] < min) min = a[i];
		i++;
	}
	printf("MAX = %d \nMIN = %d", max, min);
	
	return 0;
}