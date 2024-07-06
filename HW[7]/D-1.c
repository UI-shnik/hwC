
#include <stdio.h>
void recFunc(int n)
	{
	if(n!=1)
		{
		recFunc(n-1);
		}
	printf("%d ", n);
	}
int main(int argc, char **argv)
{
	int n=0;
	scanf("%d",&n);
	recFunc(n);
	return 0;
}

