#include<stdio.h>
#include<stdlib.h>
int  x[200][200], gasit = 0, c, v[401], mijloc;

int caut(int stanga, int dreapta)
{
	if (stanga > dreapta)
		return -1;
	else
	{
		mijloc = (stanga + dreapta) / 2;
		if (c == v[mijloc])
		{
			gasit = 1;
			return mijloc;

		}
		if (c < v[mijloc])
			return caut(stanga, mijloc - 1);
		else
			return caut(mijloc + 1, dreapta);
	}
}
int main()
{
	int n, i, j, p = 0;
	printf("Introduceti numarul de linii si coloane");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{

			printf("x[%d][%d]=", i, j);
			scanf("%d", &x[i][j]);
		}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%d ", x[i][j]);
		printf("\n");
	}

	printf("\nIntroduceti elementul cautat:");
	scanf("%d", &c);
	for (i = 0; i < n; i++) {
		p = 0;

		for (j = 0; j < n; j++)
		{
			v[p] = x[i][j];
			p++;
		}


		caut(0, p - 1);


	}
	if (gasit == 1)
		printf("Numarul %d se gaseste in matrice\n", c);
	else
		printf("Numarul cautat nu se afla in matricea data\n");


	system("pause");
	return 0;
}