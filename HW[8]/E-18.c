#include <stdio.h>

int justFunction(int i, int n)
{
	int ans=0;
	for(int j=2; j<=n; j++)
		{
		ans= (j%i==0) ? ans+1 : ans;
		}
	return ans;
}

int main(int argc, char **argv)
{
	int n;
	scanf("%d", &n);
	for(int i=2; i<10; i++)
		{
		printf("%d	", i);
		printf("%d\n", justFunction(i, n));
		}
	return 0;
}


