
#include <stdio.h>
int is2pow(int n)
{
	if(n==1) return 1;
	int ans=0;
	if (n/2!=0 && n%2==0 && n!=2)
		{
		ans=is2pow(n/2);
		}
	else if (n/2!=0 && n%2==0 && n==2)
		{
		ans=1;
		}
	return ans;
}

int main(int argc, char **argv)
{
	int num;
	scanf("%d", &num);
	if(is2pow(num)==1) printf("YES");
	else printf("NO");
	return 0;
}

