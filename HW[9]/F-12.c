#include <stdio.h>

void change_max_min(int size, int a[])
{
	int max=0, min=0, n;
	for(int i=1; i<size; i++)
	{
		if(a[max]<a[i])
		{
			max=i; 
		}
		else if(a[min]>a[i])
		{
			min=i; 
		}
	}	
	n=a[max];
	a[max]=a[min];
	a[min]=n;
}

int main(int argc, char **argv)
{
	return 0;
}

