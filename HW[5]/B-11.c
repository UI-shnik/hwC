

#include <stdio.h>

int main(int argc, char **argv)
{
	int num=0;
	int check=1;
	int digit=0;
	int ans=0;


	scanf("%d", &num);
	
	while((num/check)!=0){
		ans=ans*10;
		digit =((num%(10*check))/check);
		check = check*10;
		ans=(ans+digit);
		}

	printf("%d", ans);
	
	return 0;
}

