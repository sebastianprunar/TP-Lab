#include<stdio.h>
#include<conio.h>

int m[10][10], d[10][10], n;
//m contine valorile labirintului
//d se pastreaza drumul parcurs
void afisare()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			printf("%d", d[i][j]);
		printf("\n");
	}
	printf("\n");
	getch();
}

void labirint(int a, int b)
{
	if ((a == 0) || (a == n - 1) || (b = n - 1))
	{
		d[a][b] = 1;
		afisare();
	}
	else
	{
		if ((a + 1 < n) && (d[a + 1][b] == 0) && (m[a + 1][b] == 1))
		{
			d[a + 1][b] = 1;
			labirint(a + 1, b);
			d[a + 1][b] = 0;
		}
		if ((b - 1 >= 0) && (d[a][b - 1] == 0) && (m[a][b - 1] == 1))
		{
			d[a - 1][b] = 1;
			labirint(a - 1, b);
			d[a - 1][b] = 0;
		}
		if ((b + 1 < n) && (d[a][b + 1] == 0) && (m[a][b + 1] == 1))
		{
			d[a][b + 1] = 1;
			labirint(a, b + 1);
			d[a][b + 1] = 0;
		}
	}
}
void main()
{
	int i, j, xi, yi;
	printf("Introduceti dimensiunea matricii ");
	scanf("%d", &n);
	printf("Introduceti valorile matricii labirintului \n");
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			printf("m[%d][%d]", i, j);
			scanf("%d", &m[i][j]);
			d[i][j] = 0;
		}
	printf("Introduceti linia de pornire: ");
	scanf("%d", &xi);
	printf("Introduceti coloana de pornire: ");
	scanf("%d", &yi);
	d[xi][yi] = 1;
	labirint(xi, yi);
	system("pause");
	return 0;

}