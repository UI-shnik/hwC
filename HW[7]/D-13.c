
#include <stdio.h>
int isSimple(int num)
{
	if(num==1) return 0;
	if(num==2) return 2;
	int counter=0;
	for(int i=1;i<=num;i++)
		{
		if(num%i==0) counter++;
		}
	return counter;
}
void func(int n)
{
	for(int i=2; i<=n; i++)
		{
			if(n%i==0 && isSimple(i)==2)
				{
				printf("%d ", i);
				func(n/i);
				break;
				}
		}
}
int main(int argc, char **argv)
{
	int num;
	scanf("%d", &num);
	func(num);
	return 0;
}

