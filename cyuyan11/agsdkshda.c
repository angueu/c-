#include<stdio.h>
int main() {
	int a = 0;
	int b = 0;
	scanf_s("%d%d", &a,&b);
	printf("a=%d b=%d", a, b);
   /*  a = a | b;
	a = a & b;
	b = b&a;*/
	a = a ^ b;
	b = b ^ a;
		a= a ^ b;
	printf("a=%d b=%d\n",a,b);
	return 0;
}