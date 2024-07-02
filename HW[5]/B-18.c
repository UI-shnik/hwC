

#include <stdio.h>

int main(int argc, char **argv)
{
	int number=-1;
	int fiboNumberOne=0;
	int fiboNumberTwo=1;
	int a=0;

	scanf("%d", &number);
	
	for(int i=0;i<number; i++){
		printf("%d ", fiboNumberTwo);
		a=fiboNumberTwo;
		fiboNumberTwo=fiboNumberOne+fiboNumberTwo;
		fiboNumberOne=a;
		}

	
	return 0;
}

