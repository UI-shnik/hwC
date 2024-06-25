#include <stdio.h>

int main(int argc, char **argv)
{
	
	int Num;
	int Ans=0;
	
	 scanf("%d", &Num);
	
	int A=(Num/100);					// Цифра 1 (сотни)
	int B=(Num/10)-(A*10);				// Цифра 2 (десятки)
	int C=(Num/1) -(B*10) - (A*100);	// Цифра 3 (еденицы)
	
	Ans=A;
	
	if(Ans<B) Ans=B;
	if(Ans<C) Ans=C;
	
	printf("%d",Ans);

	return 0;
}
