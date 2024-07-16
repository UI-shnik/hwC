#include <stdio.h>

void numToDigits(int* arr, int arr_size, int n)
{
	int n1=n;
	int j=0;
	while(n1!=0)
		{
		arr[j]=n1%10;
		j++;
		n1=n1/10;	
		}	
	for(int i=0; i<arr_size;i++)
		{
		for(int j=0; j<arr_size; j++)
			{
			if(arr[i]>arr[j])
				{
				int a=arr[i];
				arr[i]=arr[j];
				arr[j]=a;	
				}
			}
		}
}

void output(int* arr, int arr_size)
{
	int ans=0;
	for(int i=0; i<arr_size; i++)
		{
		ans=(ans*10)+arr[i];
		}
	printf("%d", ans);
}

int main(int argc, char **argv)
{
	int n;
	scanf("%d", &n);
	int n1=n;
	int digit_counter=1;
	while(n1/10!=0) 
		{
		digit_counter++; 
		n1=n1/10;
		}
	const int ARRAY_SIZE=digit_counter;
	int arr_digits[ARRAY_SIZE];
	numToDigits(arr_digits, ARRAY_SIZE, n);
	output(arr_digits, ARRAY_SIZE);
	return 0;
}


