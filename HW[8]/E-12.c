#include <stdio.h>
const short unsigned int ARR_SIZE=10;
void input(int* arr, int arr_size)
{
	for(int i=0; i<arr_size/4; i++)
		{
		scanf("%d", &arr[i]);
		}
}

void arraySortAgain(int* arr, int arr_size)
{
	int check=1;
	while(check)
		{
		check=0;
		for(int i=0; i<(arr_size/4/2)-1; i++)
			{
			if(arr[i]>arr[i+1])
				{
				int m=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=m;	
				check=1;
				}
			if(arr[i+(arr_size/4/2)]<arr[i+1+(arr_size/4/2)])
				{
				int m=arr[i+(arr_size/4/2)];
				arr[i+(arr_size/4/2)]=arr[i+1+(arr_size/4/2)];
				arr[i+1+(arr_size/4/2)]=m;	
				check=1;
				}
			}
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
	int data[ARR_SIZE];
	input(data, (short)sizeof(data));
	arraySortAgain(data, (short)sizeof(data));
	output(data, (short)sizeof(data));
	return 0;
}

