#include <stdio.h>

int is_two_same(int, int*);

int main(int argc, char **argv)
{
	return 0;
}

int is_two_same(int size, int a[])
{
	int element;
	for(int i=0; i<(size-1);i++)
	{
		element=a[i];
		for(int j=(i+1); j<size; j++)
		{
			if(a[j]==element)
			{
				return 1;
			}
		}
	}
	return 0;
}
