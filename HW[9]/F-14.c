#include <stdio.h>

int sum_between_ab(int from, int to, int size, int a[]) 
{
	int sum=0;
	if(from>to) 
	{
		from^=to; 
		to^=from;
		from^=to;
	}
	for(int i=0;i<size;i++)
	{
		if(a[i]>=from && a[i]<=to)
		{
			sum+=a[i];
		}
	}
	return sum;
}

int main(int argc, char **argv)
{
	return 0;
}

