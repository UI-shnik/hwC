

#include <stdio.h>

int main(int argc, char **argv)
{
	int num=0;
	int check=1;
	int min=10;
	int max=-1;
	int digit=-1;


	scanf("%d", &num);
	
	while((num/check)!=0){
		
		digit =((num%(10*check))/check);
		check = check*10;
		if(digit>max)max=digit;
		if(digit<min)min=digit;
		}

	printf("%d %d", min, max);
	
	return 0;
}

