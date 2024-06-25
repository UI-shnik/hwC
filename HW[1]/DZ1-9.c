#include <stdio.h>

int main(int argc, char **argv)
{
	
	int FirstNumber=0;
	int SecondNumber=0;
	int ThirdNumber=0;
	
	scanf("%d", &FirstNumber);
	scanf("%d", &SecondNumber);
	scanf("%d", &ThirdNumber);
	
	int Answer=FirstNumber;
	
	if(Answer<SecondNumber) Answer=SecondNumber;
	if(Answer<ThirdNumber) Answer=ThirdNumber;
	
	printf("%d", Answer);

	return 0;
}


