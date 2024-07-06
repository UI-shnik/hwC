
#include <stdio.h>
int recFunc(int n)
	{
	int sum=0;
	if(n!=1){
	sum=n+recFunc(n-1);
	} else {sum=1;}
	return sum;
	}
int main(int argc, char **argv)
{
	int n=0;
	scanf("%d",&n);
	printf("%d", recFunc(n));
	return 0;
}

