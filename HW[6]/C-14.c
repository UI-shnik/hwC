#include <stdio.h>
short func(int num){
	int sum=0;
	int p=1;
	while(num/p!=0){
		sum=sum+((num%(10*p))/p);
		p=p*10;
		}
		return (sum%2==0)? 1: 0;
	}

int main(int argc, char **argv)
{
	
	int num=0;
	scanf("%d", &num);
	if(func(num)==1)printf("YES");
	else printf("NO");
	return 0;
}
