
#include <stdio.h>
int func(int n)
{
	int ans=0;
	if(n/2!=0)
		{
		ans=(10*func(n/2))+(n%2);
		}
	else
		{
		ans=n%2;
		}
	
	return ans;
}
int main(int argc, char **argv)
{
	int n=0;
	scanf("%d", &n);
	printf("%d", func(n));
	return 0;
}

