

#include <stdio.h>

int main(int argc, char **argv)
{
	
	int FirstNumber=0;
	int SecondNumber=0;
	
	scanf("%d", &FirstNumber);
	scanf("%d", &SecondNumber);
	
	if(FirstNumber>=SecondNumber){
		
			printf("%d", SecondNumber);
			printf(" %d", FirstNumber);
		
		} else{
		
			printf("%d", FirstNumber);
			printf(" %d", SecondNumber);
			
		}

	return 0;
}

