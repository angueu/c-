#include<stdio.h>
int main() {
	/*double a = 5 / 2.0;
	printf("%IF\n", a);*/
	/*int a = 16;
	int b = a >> 1;
	/*printf("%d", b);*///ºı…Ÿ¡À“ª∞Î°£
	/*int a = 3;
	int b = 5;
	int tmp = 0;*/
	int tmp = 0;
	int count = 0;
	
	scanf_s("%d", &tmp);
	while (tmp) {
		if (tmp % 2 == 1) {
			count++;
		}
		tmp = tmp / 2;
	}
	printf("%d\n", count);
	return 0;
}