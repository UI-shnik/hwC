#include <stdio.h>
void input(int* arr, int arr_size)
{
	for(int i=0; i<arr_size/4; i++)
		{
		scanf("%d", &arr[i]);
		}
}

void printAverage(int* arr, int arr_size)
{
	int ans=0;
	for(int i=0;i<arr_size/4;i++) 
		{
		ans=ans+arr[i];
		}
	printf("%.2f", (float)ans/(arr_size/4));
}

int main(int argc, char **argv)
{
	int data[12];
	input(data, (short)sizeof(data));
	printAverage(data, (short)sizeof(data));
	return 0;
}

