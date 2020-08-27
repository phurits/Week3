#include<stdio.h>
int main()
{
	int a,tt=0,n;
	scanf_s("%d%n", &a,&n);
	do {
		while(a>0)
		{
			tt += a % 10;
			a = a / 10;
		}
		a = tt;
		tt = 0;
	} while (a > 10);
	printf("%d", a);
	return 0;
}
