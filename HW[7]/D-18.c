
#include <stdio.h>
void print_digits(int n)
{
	if(n/10!=0)
		{
		print_digits(n/10);
		printf("%d ", n%10);
		}
	else
		{
		printf("%d ", n%10);
		}
}
int main(int argc, char **argv)
{
	int num;
	scanf("%d", &num);
	print_digits(num);
	return 0;
}

