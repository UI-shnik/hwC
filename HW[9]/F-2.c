#include <stdio.h>

void sort_even_odd(int n, int a[]);

int main(int argc, char **argv)
{
	int testArray[22]={1,2,3,4,5,6,7,8,9,0,11,13,11,44,55,55,53,12,10,8,2,1};
	int sizeArray=22;
	sort_even_odd(sizeArray, testArray);
	for(int i=0; i<sizeArray;i++) printf("%d ", testArray[i]);
	return 0;
}

void sort_even_odd(int n, int a[])
{
	int index=0;
	int is_number_find=0;
	for(int i=0; i<(n-1); i++)
	{
		if(a[i]%2!=0)
		{
			for(int j=(i+1); j<n; j++)
			{
				if(a[j]%2==0)
				{
					index=j;
					is_number_find=1;
					break;
				}
			}
			if(is_number_find)
			{
				is_number_find=0;
				int num1=a[i];
				int num2=a[index];
				for(int j=index; j>(i+1); j--)
				{
					a[j]=a[j-1];
				}
				a[i+1]=num1;
				a[i]=num2;
			}
		}
	}
}
