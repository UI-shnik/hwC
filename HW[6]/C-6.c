#include <stdio.h>
unsigned long pow1 (int, int);

int main(int argc, char **argv)
{
	int num1=-1;
		scanf("%d", &num1);
	printf("%lu ",pow1(2, num1));
	return 0;
}

unsigned long pow1(int a, int b){
	unsigned long Ans=1;
	for(int i=1;i<b;i++){
			Ans=Ans*a;
		}
	return Ans;
	}
