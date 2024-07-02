#include <stdio.h>

int  factorial(int n){
	int answer=n;
	for(int i=(n-1);i>1;i--){
		answer=answer*i;
		}
		return answer;
	}

int main(int argc, char **argv)
{
	int N=0;
	scanf("%d", &N);
	printf("%d", factorial(N));

	return 0;
}

