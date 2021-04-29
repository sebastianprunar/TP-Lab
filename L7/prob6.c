#include<stdio.h>

int bubblesort_recursiv(int v[50], int n)
{
	int i, aux;

	if (n > 0)

	{
		for (i = 1; i < n; i++)
		{
			if (v[i - 1] > v[i])
			{
				aux = v[i];
				v[i] = v[i - 1];
				v[i - 1] = aux;
			}
			bubblesort_recursiv(v, n - 1);
		}
	}
}
int main()
{

	int v[50], i, n;
	printf("Introduceti numarul de elemente: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("v[%d]=", i); scanf("%d", &v[i]);
	}

	bubblesort_recursiv(v, n);
	printf("Sortare: ");
	for (i = 0; i < n; i++)
	{
		printf("%d ", v[i]);
	}
	system("pause");
	return 0;

}