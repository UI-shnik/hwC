#include <stdio.h>
void input(int* arr, int arr_size)
{
	for(int i=0; i<arr_size/4; i++)
		{
		scanf("%d", &arr[i]);
		}
}

void printPositivSum(int* arr, int arr_size)
{
	int max=0;
	for(int i=0;i<arr_size/4;i++) 
		{
		max = (arr[i]>0) ? max+arr[i] : max;
		}
	printf("%d", max);
}

int main(int argc, char **argv)
{
	int data[10];
	input(data, (short)sizeof(data));
	printPositivSum(data, (short)sizeof(data));
	return 0;
}

