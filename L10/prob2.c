#include<stdio.h>
#include<stdlib.h>
int k, primul, urmatorul, suma, cnt = 0;
void suma_minima()
{
	if (primul + urmatorul <= k)
		do
		{
			suma = primul + urmatorul;
			primul = urmatorul;
			urmatorul = suma;
		} while (primul + urmatorul <= k);
}
void fibonacci(int n)
{
	if (k > 0)
		do
		{
			primul = 0;
			urmatorul = 1;
			if (primul + urmatorul <= k)
				suma_minima();
			cnt++;
			k = k - suma;
		} while (k > 0);
}
int main()
{
	printf("k= ");
	scanf("%d", &k);
	fibonacci(k);
	printf("%d\n", cnt);
	system("pause");
	return 0;
}