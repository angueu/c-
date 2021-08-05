#include<stdio.h>

	struct met 
	{
		int age;
		int mep[3];
	};
int main() {
	struct met s1 ={12, 12};
	struct met s2 = { 23,25 };
	struct met s3 = { 24,26 };
	struct met s4 = { 25,26 };
	printf("%d", s4.mep);
	return 0;
}