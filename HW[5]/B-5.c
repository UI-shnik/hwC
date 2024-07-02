

#include <stdio.h>

int main(int argc, char **argv)
{
	int num=0;
	int ans=0;
	int check=1;
	
	scanf("%d", &num);
	
	while((num/check)!=0){
		ans=ans+((num%(10*check))/check);
		check=check*10;
		}
		
	printf("%d", ans);
		
	return 0;
}

