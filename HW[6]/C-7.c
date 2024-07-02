#include <stdio.h>
int func1(int, int);

int main(int argc, char **argv)
{
	int num1=-1;
	int num2=-1;
	scanf("%d", &num1);
	scanf("%d", &num2);
	printf("%d ",func1(num1, num2));
	return 0;
}

int func1(int num, int p){
	int Ans=0;
	int range=1;
	while(num/p!=0){
		Ans=Ans+((num%p)*range);
		num=num/p;
		range=range*10;
		}
		Ans=Ans+((num%p)*range);
	return Ans;
	}
