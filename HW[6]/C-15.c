#include <stdio.h>
short int grow_up(int num){
	int check=10;
	int p=1;
	while(num/p!=0){
		if(((num%(10*p))/p)>=check){
			return 0;
			} else {
			check=((num%(10*p))/p);
			}
		p=p*10;
		}
		return 1;
	}

int main(int argc, char **argv)
{
	
	int num=0;
	scanf("%d", &num);
	if(grow_up(num)==1)printf("YES");
	else printf("NO");
	return 0;
}

