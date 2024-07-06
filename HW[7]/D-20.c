
#include <stdio.h>
int recurs_power(int n, int p)
{
	int ans;
	if((p*p)>1)ans=n*recurs_power(n, p-1);
	else if((p*p)==1)ans=n;
	else ans=1;
	return ans;

}

int main(int argc, char **argv)
{
	int n, p;
	scanf("%d%d", &n, &p);
	printf("%d",recurs_power(n, p));
	return 0;
}

