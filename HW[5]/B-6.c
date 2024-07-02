

#include <stdio.h>

int main(int argc, char **argv)
{
	int num=0;
	int firstNumber=-1;
	int secondNumber=-1;
	int check=1;
	
	scanf("%d", &num);
	
	while((num/check)!=0){
		secondNumber =((num%(10*check))/check);
		if(secondNumber==firstNumber){
				printf("YES");
				goto end;
			}
		check=check*10;
		firstNumber=secondNumber;
		}
		
	printf("NO");
	end:
	return 0;
}

