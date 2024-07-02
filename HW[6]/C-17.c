#include <stdio.h>
short int is_happy_number(int num){
	int sum=0;
	int prod=1;
	int p=1;
	while(num/p!=0){
		sum=sum+((num%(10*p))/p);
		prod=prod*((num%(10*p))/p);
		p=p*10;
		}
		return (sum==prod)?1:0;
	}

int main(int argc, char **argv)
{
	
	int num=0;
	scanf("%d", &num);
	if(is_happy_number(num)==1) printf("YES");
	else printf("NO");
	return 0;
}

