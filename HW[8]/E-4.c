#include <stdio.h>
void input(int* arr)
{
	for(int i=0; i<10; i++)
		{
		scanf("%d", &arr[i]);
		}
}

void print2Max(int arr[])
{
	int max1, max2, max1_index;
	max1=arr[0];
	max1_index=0;
	for(int i=1;i<10; i++)
		{
		max1<arr[i] ? max1=arr[i], max1_index=i : 1;
		}
	max2 = (max1_index==0) ? arr[1] : arr[0];
	for(int i=1;i<10; i++)
		{
		max2<arr[i] && max1_index!=i ? max2=arr[i] : 1;
		}
	printf("%d", max1 + max2);
}

int main(int argc, char **argv)
{
	int data[10];
	input(data);
	print2Max(data);
	return 0;
}

