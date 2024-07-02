

#include <stdio.h>

int main(int argc, char **argv)
{
	int num=0;
	int check=1;
	int digitTwo=10;
	int digitOne=10;


	scanf("%d", &num);
	
	while((num/check)!=0){
		digitTwo =((num%(10*check))/check);
		check = check*10;

		if(digitTwo>=digitOne){
				printf("NO");
				goto end;
			}
		digitOne=digitTwo;
		}

	printf("YES");
	end:	
	return 0;
}

