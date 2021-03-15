//3. Folosind doar operatii pe biti sa se verifice daca un numar introdus de la tastatura
//este pozitiv, negativ sau zero.
//Help: Trebuie sa cunoasteti dimensiunea tipului de date.Recomand sa folositi intregi, (int)
#include<stdio.h>
int main()
{
	int x, k = 0;
	printf("X="); scanf("%d", &x);   

	while (k != 7)                
	{
		if ((1 & (x >> k)) == 1)
			break;
		k++;
	}
	if (k == 7)
		printf("Numarul citit este 0\n");

	if ((1 & (x >> 7)) == 0 && k != 7)
		printf("Numar pozititv\n");             
	else
		if ((1 & (x >> 7)) == 1 && k != 7)
			printf("Numar negativ\n");  
	system("pause");
	return 0;
}