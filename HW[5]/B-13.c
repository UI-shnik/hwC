

#include <stdio.h>

int main(int argc, char **argv)
{
	int num=0;
	int check=1;
	int j=0;
	int k=0;
	int digit=-1;


	scanf("%d", &num);
	
	while((num/check)!=0){
		
		digit =((num%(10*check))/check);
		check = check*10;
		if(digit%2==0){
				j++;
			} else {
				k++;
				}
		}

	printf("%d %d", j, k);
	
	return 0;
}

