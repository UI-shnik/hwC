#include <stdio.h>

void swap_negmax_last(int size, int a[]);

int main(int argc, char **argv)
{
	return 0;
}

void swap_negmax_last(int size, int a[])
{
	int maxBelowZero=a[0];
	int wrongSign=0;
	int index=0;
	if(maxBelowZero>0)
	{
		wrongSign=1;	
	}
	for(int i=1; i<size; i++)
	{
		if((a[i]<0 && a[i]>maxBelowZero) || (wrongSign==1 && a[i]<0))
		{
			maxBelowZero=a[i];
			wrongSign=0;
			index=i;
		}
	}
	if(maxBelowZero<0 && maxBelowZero!=a[size-1])
	{
		int n=a[size-1];
		a[size-1]=maxBelowZero;
		a[index]=n;
	}
}
