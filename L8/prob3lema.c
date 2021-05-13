#include<stdio.h>
int sir(int n)
{
	if (n != 1 && n != 0)
		if (n % 2 == 0)
		{
			printf("%d->", n);
			return sir(n / 2);
		}
		else
		{
			printf("%d->", n);
			return sir(3 * n + 1);
		}
	if (n == 0)
		printf("0\n");
}
int main()
{
	int n;
	printf("n=");
	scanf("%d", &n);
	sir(n);
	if (n != 0)
		printf("1\n");
	system("pause");
	return 0;
}