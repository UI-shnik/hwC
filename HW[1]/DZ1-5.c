


#include <stdio.h>

int main(int argc, char **argv)
{
	int FirstNumber=0;
	int SecondNumber=0;
	int ThirdNumber=0;
	int Sum=0;
	int Product=0;
	
	scanf("%d", &FirstNumber);
	scanf("%d", &SecondNumber);
	scanf("%d", &ThirdNumber);
	
	Sum=FirstNumber+SecondNumber+ThirdNumber;
	Product=FirstNumber*SecondNumber*ThirdNumber;
	
	printf("%d", FirstNumber);
	printf("+%d", SecondNumber);
	printf("+%d", ThirdNumber);
	printf("=%d\n", Sum);
	
	printf("%d", FirstNumber);
	printf("*%d", SecondNumber);
	printf("*%d", ThirdNumber);
	printf("=%d", Product);
	
	return 0;
}
