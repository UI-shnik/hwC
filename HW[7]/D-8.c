
#include <stdio.h>
void func(int a, int b)
	{
	if (a<b)
		{
		printf("%d ", a);
		func(a+1,b);
		} 
	else if(a>b)
		{
		printf("%d ", a);
		func(a-1, b);
		}
	else
		{
		printf("%d ", a);
		}
	}
int main(int argc, char **argv)
{
	int a=0, b=0;
	scanf("%d%d", &a, &b);
 	func(a, b);
	return 0;
}

