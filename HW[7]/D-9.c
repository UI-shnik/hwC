
#include <stdio.h>
int sum_digits(int n)
{
	int ans=0;
	if(n!=0){
		ans=(n%10) + sum_digits(n/10);
	}
	return ans;
}
int main(int argc, char **argv)
{
	int n=0;
	scanf("%d", &n);
 	printf("%d", sum_digits(n));
	return 0;
}

