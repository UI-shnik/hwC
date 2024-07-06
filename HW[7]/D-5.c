
#include <stdio.h>
void recFunc(int n)
	{
     if(n/2!=0){
		 recFunc(n/2);
		 printf("%d", n%2);
		 } else if (n/2==0 && n%2!=0){
			 printf("%d", n%2); 
			 }
	}
int main(int argc, char **argv)
{
	int n=0;
	scanf("%d",&n);
	if(n==0)
	{ 
		printf("%d", 0);
		return 0;
	}
	recFunc(n);
	return 0;
}

