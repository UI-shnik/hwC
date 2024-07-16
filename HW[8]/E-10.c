#include <stdio.h>
const short unsigned int ARR_SIZE=12;
void input(int* arr, int arr_size)
{
	for(int i=0; i<arr_size/4; i++)
		{
		scanf("%d", &arr[i]);
		}
}

void cycleShear(int* arr, int arr_size)
{
	
	int m, n=arr[0];
	for(int i=1; i<arr_size/4;i++)
		{
		m=arr[i];
		arr[i]=n;
		n=m;
		}
	arr[0]=n;
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
	int data[ARR_SIZE];
	input(data, (short)sizeof(data));
	for(int i=0;i<4;i++)
		{
		cycleShear(data, (short)sizeof(data));
		}
	output(data, (short)sizeof(data));
	return 0;
}

