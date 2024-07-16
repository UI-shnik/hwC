#include <stdio.h>

int main(int argc, char **argv)
{
	int n;
	int p=1;
	int number_of_digits=1;
	scanf("%d", &n);
	int n1=n;
	while (n1/10!=0)
		{
		number_of_digits++;
		n1=n1/10;
		}
		
	for(int i=1; i<number_of_digits; i++) p=p*10;

	while (p!=0)
		{
		printf("%d ", n/p);
		n=n-((n/p)*p);
		p=p/10;
		}
		
	return 0;
}


