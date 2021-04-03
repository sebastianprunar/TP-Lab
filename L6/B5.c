#include <stdio.h>

#define ARRAY_SIZE(x)  (sizeof(x) / sizeof((x)[0]))

int w[] = { 1,3,5,6,7 };
int s = 12;

int rezultat[100];
int indexRezultat = 0;
int i = 0;
int suma = 0;

void printeaza()
{
	for (int j = 0; j < ARRAY_SIZE(rezultat); j++)
	{
		if (rezultat[j + 1] == 0)
		{
			printf("%d\n", rezultat[j]);
			break;
		}
		printf("%d-", rezultat[j]);
	}
}

int findIndex(int value)
{
	int k = 0;

	while (k < ARRAY_SIZE(w) && w[k] != value) ++k;

	return (k == ARRAY_SIZE(w) ? -1 : k);
}

void reseteazaIndexi()
{
	i = findIndex(rezultat[indexRezultat - 2]) + 1;
	suma -= rezultat[indexRezultat - 1];
	rezultat[indexRezultat - 1] = 0;
	suma -= rezultat[indexRezultat - 2];
	rezultat[indexRezultat - 2] = 0;
	indexRezultat -= 2;
}

void calculeaza()
{
	while (i < ARRAY_SIZE(w))
	{
		suma += w[i];
		rezultat[indexRezultat++] = w[i++];

		if (suma < s)
		{
			if (i == ARRAY_SIZE(w))
			{
				if (indexRezultat == 1)
				{
					return;
				}
				reseteazaIndexi();
			}
		}
		else
		{
			if (suma == s)
			{
				printeaza();
			}
			if (indexRezultat == 1)
			{
				return;
			}
			reseteazaIndexi();
		}
	}
}

int main()
{

	calculeaza();
	system("pause");
	return 0;
}