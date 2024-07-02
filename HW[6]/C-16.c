#include <stdio.h>
short int is_prime(int num){
	int check=0;
	for(int i=1;i<=(num/2);i++){
		if(num%i==0) check++;
		}
		return check;
	}

int main(int argc, char **argv)
{
	
	int num=0;
	scanf("%d", &num);
	if(is_prime(num)==1) printf("YES");
	else printf("NO");
	return 0;
}

