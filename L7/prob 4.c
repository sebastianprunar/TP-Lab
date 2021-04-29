#include<stdio.h>

int suma_recursiv(int n)
{
	if (n == 0) return 0;
	else return (n + suma_recursiv(n - 1));
}
int suma_iterativ(int n, int s)
{
	int i;
	printf("n= "); scanf("%d", &n);
	for (i = 1; i <= n; i++)
		s = s + i;
	printf("s= ", s);
}
int  main()
{
	int n;
	printf("Introduceti n: ");
	scanf("%d", &n);
	printf("Suma elementelor este %d\n", suma_recursiv(n));

	getchar();
	system("pause");
	return 0;
}