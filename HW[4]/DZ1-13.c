#include <stdio.h>

int main(int argc, char **argv)
{
	
	int Num;
	int Sum=0;
	
	 scanf("%d", &Num);
	
	Sum=Num%10;
	Sum=Sum+(((Num-Sum)%100)/10);
	Sum=Sum+(((Num-Sum)%1000)/100);

	printf("%d",Sum);

	return 0;
}
