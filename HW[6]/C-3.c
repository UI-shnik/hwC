#include <stdio.h>

int Mid(int numOne, int numTwo){
	
		return (numOne+numTwo)/2;
	}

int main(int argc, char **argv)
{
	int num1=0;
	int num2=0;
	scanf("%d", &num1);
	scanf("%d", &num2);
	printf("%d ", Mid(num1, num2));
	return 0;
}

