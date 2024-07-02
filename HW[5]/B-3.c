

#include <stdio.h>

int main(int argc, char **argv)
{
	int min=0;
	int max=0;
	int sum=0;
	
	scanf("%d", &min);
	scanf("%d", &max);
	
	for(int i=min;i<=max; i++){
			sum=sum+(i*i);
		}
	printf("%d ", sum);
		
	return 0;
}

