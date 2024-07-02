

#include <stdio.h>

int main(int argc, char **argv)
{
	int num=0;
	int check=1;
	int digit=-1;
	int j=0;
	int k=0;

	scanf("%d", &num);
	
	while((num/check)!=0){
		digit =((num%(10*check))/check);
		check = check*10;
		k++;
		if((digit%2)==0){
			j++;
			}
		}

	if(j==k) printf("YES");
	else printf("NO");	
	
	return 0;
}

