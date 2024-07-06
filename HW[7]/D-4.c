
#include <stdio.h>
void recFunc(int n, int check_zerro)
	{
	if(check_zerro && n==0){printf("%d", 0);}
	if(n!=0){
		recFunc(n/10, 0);
		printf("%d ", (n%(10)));
		}
	}
int main(int argc, char **argv)
{
	int n=0;
	scanf("%d",&n);
	recFunc(n, 1);
	return 0;
}

