
#include <stdio.h>
void func(int n)
	{
	
	if (n!=0){
		printf("%d ", n);
		func(n-1);
		} 
	}
int main(int argc, char **argv)
{
	int n=0;
	scanf("%d", &n);
 	func(n);
	return 0;
}

