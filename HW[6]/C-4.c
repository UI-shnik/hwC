#include <stdio.h>

int sum(int arg){
	int Ans=0;
	for(int i=1; i<=arg; i++) Ans=Ans+i;
	return Ans;
	}

int main(int argc, char **argv)
{
	int num1=-1;
	int Ans=0;
	while(num1!=0){
		scanf("%d", &num1);
		if(Ans<func(num1)){
			Ans=func(num1);
		}
		}
	printf("%d ",Ans);
	return 0;
}

