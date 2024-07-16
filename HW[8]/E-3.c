#include <stdio.h>
void input(int* arr)
{
	for(int i=0; i<10; i++)
		{
		scanf("%d", &arr[i]);
		}
}

void printMinAndMax(int arr[])
{
	int min, max, min_index, max_index;
	min=arr[0];
	max=arr[0];
	min_index=0;
	max_index=0;
	for(int i=1;i<10; i++)
		{
		min>arr[i] ? min=arr[i], min_index=i : 1;
		max<arr[i] ? max=arr[i], max_index=i : 1;
		}
	printf("%d %d %d %d", max_index+1, max, min_index+1, min);
}

int main(int argc, char **argv)
{
	int data[10];
	input(data);
	printMinAndMax(data);
	return 0;
}

