

#include <stdio.h>

int main(int argc, char **argv)
{
	int min=0;
	int max=0;
	
	scanf("%d", &min);
	scanf("%d", &max);
	
	for(int i=min;i<=max; i++){
			printf("%d ", (i*i));
		}
		
	return 0;
}

