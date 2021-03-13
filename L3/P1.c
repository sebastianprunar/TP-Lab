//Sa se scrie un program care calculeaza suma elementelor unui vector
//folosindu - ne doar de variabile de tip pointer.
#include<stdio.h>
int main()
{
	int *a, *b, *s;

	a = (int*)malloc(sizeof(a));
	b = (int*)malloc(sizeof(b));
	s = (int*)malloc(sizeof(s));

	printf("a="); scanf("%d", a);
	printf("b="); scanf("%d", b);

	(*s) = (*a) + (*b);

	printf("%d+%d=%d", *a, *b, *s);

	free(a); free(b); free(s);
	return 0;
}

//	Sa se scrie un program care insumeaza elementele intr - o metoda separate de metoda main,
//folosind transmiterea prin referinta.
#include<stdio.h>
void suma(int n, int *s)
{
	*s = *s + n;
}
int main()
{
	int n, s = 0;
	do
	{

		printf("n="); scanf("%d", &n);
		suma(n, &s); //

	} while (n != 0);
	printf("%d", s);
	system("pause");
	return 0;
}

//	Sa se realizeze un program care interschimba 2 valori folosind un pointer ca variabila auxiliara.
#include<stdio.h>

int main()
{
	int a, b, aux;
	int* p;
	p = &aux;
	printf("a="); scanf("%d", &a);
	printf("b="); scanf("%d", &b);
	*p = a;
	a = b;
	b = *p;
	printf("a=%d b=%d", a, b);
	system("pause");
	return 0;
}