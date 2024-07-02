

#include <stdio.h>

int main(int argc, char **argv)
{
	int num=0;
	int check=1;
	int digit=-1;
	int j=0;

	scanf("%d", &num);
	
	while((num/check)!=0){
		digit =((num%(10*check))/check);
		check = check*10;
		if(digit==9){
			j++;
			}
		}

	if(j==1) printf("YES");
	else printf("NO");	
	
	return 0;
}

