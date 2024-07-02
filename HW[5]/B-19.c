

#include <stdio.h>

int main(int argc, char **argv)
{
	int num=-1;
	int ans=0;
	int check=1;
	scanf("%d", &num);
	
	while((num/check)!=0){
		ans=ans+((num%(10*check))/check);
		check=check*10;
		}

	if(ans%10==0) printf("YES");
	else  printf("NO");

	
	return 0;
}

