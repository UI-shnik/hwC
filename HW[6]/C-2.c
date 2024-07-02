#include <stdio.h>

int Power(int number, int P){
	int Ans=1;
	for(int i=1; i<=P; i++){
		Ans=Ans*number;
		}
		return Ans;
	}

int main(int argc, char **argv)
{
	int num=0;
	int p=0;
	scanf("%d", &num);
	scanf("%d", &p);
	printf("%d ", Power(num, p));
	return 0;
}

