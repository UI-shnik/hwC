#include <stdio.h>

int compression(int a[], int b[], int N);

int main(int argc, char **argv)
{
	int a[25] =  {1,0,0,1,1,1,1,0,0,0,1,0,0,0,0,0,1,1,1,0,0,0,1,1,0};
	int b[25] =  {0};
	int N = 25;
	for(int i=0; i<compression(a, b, N); i++) printf("%d ", b[i]);
	return 0;
}

int compression(int a[], int b[], int N)
{
	int checkElement, elementCounter=0, i=0, j=0;
	
	if(a[0]==1)
	{
		b[0]=0;
		j++;
	}
	
	for(i=0; i<N; i++)
	{
		checkElement=a[i];
		while((i+1)<N && checkElement==a[i+1])
		{
			elementCounter++;
			i++;
		}
		b[j]=elementCounter+1;
		elementCounter=0;
		j++;
	}
	return j;
}
