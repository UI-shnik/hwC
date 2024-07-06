
#include <stdio.h>
void func(int n, int j)
{
	
	for(int i=0; i<j; i++) 
		{
		if(n-i==0) return;
		printf("%d ", j);
		}
	func(n-j, j+1);
}
int main(int argc, char **argv)
{
	int n=0;
	scanf("%d", &n);
	func(n, 1);
	return 0;
}

