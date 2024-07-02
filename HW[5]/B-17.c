

#include <stdio.h>

int main(int argc, char **argv)
{
	int number=-1;
	int sum=0;
	int prod=1;
	int check=1;

	scanf("%d", &number);
	
	for(int i=11; i<=number; i++){
			while(i/check!=0){
				sum=sum + (i%(10*check)/check);
				prod=prod * (i%(10*check)/check);
				check=check*10;
				}
			if(sum==prod) printf("%d ", i);
			sum=0;
			prod=1;
			check=1;
		}

	
	return 0;
}

