#include <stdio.h>
int nod(int a, int b){
	/*int ans=1;
	  for(int i=1; i<= (a>b? a:b); i++){
		if(a%i==0 && b%i==0) ans=i;
		}
		return ans;
	*/
	while (a!=0 && b!=0){
		if (a > b) a=a%b;
		else b=b%a;
	}
	return a+b;
	}

int main(int argc, char **argv)
{
	int num1=0;
	int num2=0;
	scanf("%d", &num1);
	scanf("%d", &num2);
	printf("%d", nod(num1, num2));

	return 0;
}

