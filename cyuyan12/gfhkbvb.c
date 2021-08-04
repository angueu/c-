#include<stdio.h>
int tmp(int a, int b) {
	int i = 0;
	int j = 0;
	for (i = 1; i <= a; i++) 
	{
		for (j = 1; j <= b; j++) 
		{
			printf("%d*%d=%-3d ", i, j, i * j);
		}
		printf("\n");
	}
}
int main() {
	int a = 0;
	int b = 0;

	scanf_s("%d%d", &a, &b);
	tmp(a, b);
		return 0;
}