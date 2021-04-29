#include<stdio.h>
#include <stdlib.h>
int f1(int n, int a)
{
	if (n <= 1)
		return a;
	else
		return f1(n - 1, n * a);
}
int f2(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * f2(n - 1);
}
int f3(int n) {
	if (n <= 1)
		return 1;
	else
		return n * f3(n - 1);
}
int f4(int n) {
	if (n <= 1)
		return 1;
	else
		return n * f5(n - 1);
}
int f5(int n) {
	if (n <= 1)
		return 1;
	else
		return n * f4(n - 1);
}

int main() {
	int n;
	printf("Numar introdus : ");
	scanf("%d", &n);
	if (n >= 0) {
		printf("tail recursive : %d", f1(n, 1));
		printf("\nnon-tailed-recursive : %d", f2(n));
		printf("\ndirect recursive : %d", f3(n));
		printf("\nindirect recursive : %d \n", f4(n));
	}
	system("Pause");
	return 0;

}