#include<stdio.h>
void quicksort(int numar[20], int primul, int ultimul) {
	int i, j, pivot, aux;

	if (primul < ultimul) {
		pivot = primul;
		i = primul;
		j = ultimul;

		while (i < j) {
			while (numar[i] <= numar[pivot] && i < ultimul)
				i++;
			while (numar[j] > numar[pivot])
				j--;
			if (i < j) {
				aux = numar[i];
				numar[i] = numar[j];
				numar[j] = aux;
			}
		}
		aux = numar[pivot];
		numar[pivot] = numar[j];
		numar[j] = aux;
		quicksort(numar, primul, j - 1);
		quicksort(numar, j + 1, ultimul);
	}
}
int main()
{
	int i, n, numar[20];
	printf("Introduceti numarul de elemente: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("numar[%d]= ", i);
		scanf("%d", &numar[i]);
	}
	quicksort(numar, 0, n - 1);
	printf("Sortare: ");
	for (i = 0; i < n; i++)
		printf(" %d ", numar[i]);
	system("pause");
	return 0;
}