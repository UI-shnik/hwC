

#include <stdio.h>

int main(int argc, char **argv)
{
	int firstNumber=-1;
	int secondNumber=-1;
	int NOD=0;
	
	scanf("%d", &firstNumber);
	scanf("%d", &secondNumber);
	
	while(firstNumber!=0 && secondNumber!=0){
			if(firstNumber>secondNumber) 
			{
				firstNumber=firstNumber%secondNumber;
			}
			else 
			{
				secondNumber=secondNumber%firstNumber;
			}
		}
	
	NOD = firstNumber+secondNumber;

	printf("%d ", NOD);
	
	return 0;
}

