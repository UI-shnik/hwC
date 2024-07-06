#include <stdio.h>
int func(int n)
{
	int counter=0;
	if(n/2!=0)
		{
		counter=counter+(n%2)+func(n/2);
		}
	else
		{
		counter=n%2;
		}
	
	return counter;
}
int main(int argc, char **argv)
{
	int n=0;
	scanf("%d", &n);
	printf("%d", func(n));
	return 0;
}
