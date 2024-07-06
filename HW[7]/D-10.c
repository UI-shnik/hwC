
#include <stdio.h>
int is_prime(int n, int delitel)
{
	if(n==1)
		{
		return 0;
		}
		
	if(n==2)
		{
		return 1;
		}
	
	if(n%delitel==0 && delitel!=(n/2) && delitel!=1)
		{
		return 0;
		}
	if(delitel==(n/2) && n%delitel!=0 && n!=2)
        {
		return 1;
		}	
	return is_prime(n, delitel+1);
}
int main(int argc, char **argv)
{
	int n=0, delitel=1;
	scanf("%d", &n);
	if(is_prime(n, delitel))
		{
		printf("YES");
		}
	else
		{
		printf("NO");
		}
	return 0;
}

