

#include <stdio.h>

int main(int argc, char **argv)
{
	int number=-1;
	int j=0;
	//int k=0;
	
	while (number!=0)
		{
		scanf("%d", &number);
			if(number%2==0)j++;

		}
	

	printf("%d ", j-1);
	
	return 0;
}

