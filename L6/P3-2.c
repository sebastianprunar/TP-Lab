// Se citeste o valoare(x).Sa se scrie descompunerea in factori al numarului “x”.
#include<stdio.h>
#include<stdlib.h>

int x, m;
int D[100], v[100];
void afisare(int k)
{
	int i;
	for (i = 1; i <= k; i++)
	{
		printf(" %d ", v[i]);
	}
}
void back(int k, int p)
{
	int i;
	if (p == x)
		afisare(k - 1);
	else
		for (i = 1; i <= m; i++)
		{
			v[k] = D[i];
			if (p*v[k] <= x && v[k] >= v[k - 1])
				back(k + 1, p*v[k]);
		}
}
int main()
{
	int i;
	m = 0;
	printf("x= ");
	scanf("%d", &x);
	for (i = 2; i <= x / 2; i++)
		if (x%i == 0)
			D[++m] = i;
	back(1, 1);
	system("pause");
	return 0;
}