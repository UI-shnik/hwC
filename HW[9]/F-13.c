#include <stdio.h>

int count_between(int from, int to, int size, int a[]) 
{
	int elementCounter=0;
	for(int i=0;i<size;i++)
	{
		if(a[i]>=from && a[i]<=to)
		{
			elementCounter++;
		}
	}
	return elementCounter;
}

int main(int argc, char **argv)
{
	return 0;
}

