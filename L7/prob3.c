#include<stdio.h>
int main()
{
	int a[50], n, i, x, ok;
	printf("Intrduceti numarul de elemente: ");
	scanf("%d", &n);
	printf("x= ");
	scanf("%d", &x);
	for (i = 0; i < n; i++)
	{
		printf("a[%d]= ", i);
		scanf("%d", &a[i]);
	}
	ok = bsearch(a, 0, n - 1, x);
	if (ok == -1)
		printf("Element nu a fost gasit");
	else
		printf("Elementul %d se afla in vector", x);
	system("pause");
	return 0;
}
int bsearch(int x[10], int start, int dreapta, int stanga)
{
	int mijloc;
	if (start > dreapta)
		return -1;
	mijloc = (start + dreapta) / 2;
	if (stanga == x[mijloc])
		return mijloc;
	if (stanga < x[mijloc])
		mijloc = bsearch(x, start, mijloc - 1, stanga);
	if (stanga > x[mijloc])
		mijloc = bsearch(x, mijloc + 1, dreapta, stanga);
	return mijloc;
}