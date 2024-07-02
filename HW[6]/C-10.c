#include <stdio.h>
int is_Simple(int n){
	int check=0;
	for(int i=1; i<=(n/2);i++){
		if(n%i==0)check++;
		}
		if(check==1){
			return 1;
			}
			else 
			{
			return 0;
				}
	}
	
void print_simple(int n){
	start:
	for(int i=1;i<=n; i++){
		if(is_Simple(i)==1 && n%i==0){
			printf("%d ", i);
			n=n/i;
			goto start;
			}
		}
	}

int main(int argc, char **argv)
{
	int N=0;
	scanf("%d", &N);
	print_simple(N);

	return 0;
}
