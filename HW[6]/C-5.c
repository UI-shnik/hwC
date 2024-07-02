#include <stdio.h>

int sum(int arg){
	int Ans=0;
	for(int i=1; i<=arg; i++) Ans=Ans+i;
	return Ans;
	}

int main(int argc, char **argv)
{
	int num1=-1;
		scanf("%d", &num1);
	printf("%d ",sum(num1));
	return 0;
}
