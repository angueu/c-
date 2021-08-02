#include<stdio.h>

int main() {
	int arr[] = { 1,2,3,4,5,6,7,8 };
	int i = 0;
	int j = 0;
	int tmp = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++) //i的值要小于数组总下标。
	{
		for (j = 0; j<sz-i-1; j++)//j是判定要循环几次。
		{
			if (&arr[j] >=&arr[j + 1]) 
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			
		}
		printf("%d ", arr[j]);
	}
	return 0;
}