
#include <stdio.h>
void func()
{
	int num=0;
	scanf("%d", &num);
	//printf("%d ", num);
	if(num!=0 && (num%2==1 || num%2==-1))
		{
		printf("%d ", num);
		func();
		}
	else if(num!=0 && num%2==0)
		{
		func();
		}
}
int main(int argc, char **argv)
{
	func();
	return 0;
}

