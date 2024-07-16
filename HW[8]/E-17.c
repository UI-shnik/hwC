#include <stdio.h>

#define ARRAY_SIZE 10

void input(int* , int);
void findElements(int*, int);

int main(int argc, char **argv)
{
	int data[ARRAY_SIZE];
	input(data, ARRAY_SIZE);
	findElements(data, ARRAY_SIZE);
	return 0;
}

void input(int* arr, int arr_size)
{
	for(int i=0; i<arr_size; i++)
		{
		scanf("%d", &arr[i]);
		}
}

void findElements(int* data, int arr_size)
{
	int flag=0;
	for(int i=0; i<arr_size; i++)
		{	
		for(int j=0; j<arr_size; j++)
			{
			if(data[i]==data[j]) flag++;
			}
		if (flag==1) printf("%d ", data[i]);
		flag=0;
		}
}

