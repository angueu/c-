#include<stdio.h>
int main()
{
	int count = 0;
	int a = 0;
	int b = 0;
	scanf_s("%d%d", &a, &b);
	int tmp = a ^ b;
	while (tmp) 
	{
		tmp = tmp &(tmp-1);
		count++;
	}
	printf("%d ", count);
	return 0;
}
