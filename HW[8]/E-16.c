#include <stdio.h>

#define ARRAY_SIZE 10

void input(int* , int);
void findElement(int*, int*, int);
void output(int* ,int* , int);

int main(int argc, char **argv)
{
	int data[ARRAY_SIZE];
	int numberOfRepits[ARRAY_SIZE]={0};
	input(data, ARRAY_SIZE);
	findElement(data, numberOfRepits, ARRAY_SIZE);
	output(data, numberOfRepits, ARRAY_SIZE);
	return 0;
}

void input(int* arr, int arr_size)
{
	for(int i=0; i<arr_size; i++)
		{
		scanf("%d ", &arr[i]);
		}
}



void findElement(int* data, int* rep_arr, int arr_size)
{
	for(int i=0; i<arr_size;i++)
		{
			for(int j=0; j<arr_size;j++)
				{
				if(data[i]==data[j]) rep_arr[i]++;
				}
		}
}

void output(int* data, int* rep_arr, int arr_size)
{
	int max_rep_number=0;
	int index=0;
	for(int i=0; i<arr_size; i++)
		{
		if(max_rep_number<rep_arr[i])
			{
			max_rep_number=rep_arr[i];
			index=i;
			}
		}
	printf("%d", data[index]);
}
