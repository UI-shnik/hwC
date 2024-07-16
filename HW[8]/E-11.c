#include <stdio.h>
const short unsigned int ARR_SIZE=10;
void input(int* arr, int arr_size)
{
	for(int i=0; i<arr_size/4; i++)
		{
		scanf("%d", &arr[i]);
		}
}

void arraySortForLastNumber(int* arr, int arr_size)
{
	int check;
	do{
		check=0;
		for(int i=0; i<(arr_size/4)-1; i++)
			{
			if((arr[i]%10)>(arr[i+1]%10))
				{
				int n = arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=n;
				check=1;	
				}
			}
	} while (check!=0);
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
	arraySortForLastNumber(data, (short)sizeof(data));
	output(data, (short)sizeof(data));
	return 0;
}

