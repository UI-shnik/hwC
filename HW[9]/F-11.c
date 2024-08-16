#include <stdio.h>

void input(int* arr);
void min_sum_2(int* arr);

int main(int argc, char **argv)
{
	int arr[30];
	input(arr);
	min_sum_2(arr);
	return 0;
}

void input(int* arr)
{
	for(int i=0; i<30 ;i++)
	{
		scanf("%d", &arr[i]);
	}
}

void min_sum_2(int* arr)
{
	int min1I=0, min2I=1;
	for(int i=2; i<30; i++)
	{
		if(arr[min1I]>=arr[i])
		{
			min2I=min1I;
			min1I=i;
		} 
		else if(arr[min1I]<arr[i] && arr[min2I]>arr[i])
		{
			min2I=i;
		}
	}
	if(min1I<min2I)
	{
		printf("%d %d", min1I, min2I);
	}
	else
	{
		printf("%d %d", min2I, min1I);
	}
	
}
