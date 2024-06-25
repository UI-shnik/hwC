#include <stdio.h>

int main(int argc, char **argv)
{
	
	int Number1;
	int Number2;
	
	scanf("%d", &Number1);
	scanf("%d", &Number2);

	if(Number1>Number2)
		{
			printf("Above");
		}
	else if(Number1<Number2)
		{
			printf("Less");
		}
	else
		{
			printf("Equal");
		}

	return 0;
}
