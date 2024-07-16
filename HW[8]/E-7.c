#include <stdio.h>
void input(int* arr, int arr_size)
{
	for(int i=0; i<arr_size/4; i++)
		{
		scanf("%d", &arr[i]);
		}
}

void reverseHalfArray(int* arr, int arr_size)
{
	int m=0;
	for(int i=0;i<arr_size/8;i++) 
		{
		m=arr[i];
		arr[i]=arr[9-i];
		arr[9-i]=m;
		}
	for(int i=0;i<arr_size/8;i++) 
		{
		m=arr[i];
		arr[i]=arr[5+i];
		arr[5+i]=m;
		}
}

void output(int* arr, int arr_size)
{
	for(int i=0; i< arr_size/4;i++)
		{
		printf("%d ", arr[i]);
		}
}

int main(int argc, char **argv)
{
	int data[10];
	input(data, (short)sizeof(data));
	reverseHalfArray(data, (short)sizeof(data));
	output(data, (short)sizeof(data));
	return 0;
}

