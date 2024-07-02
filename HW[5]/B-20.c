

#include <stdio.h>

int main(int argc, char **argv)
{
	int num=-1;
	scanf("%d", &num);
	
	if(num==1 || num==0) {printf("NO"); goto end;}
	
	for(int i=2;i<=(num/2);i++){
		if(num%i==0){
		printf("NO"); 
		goto end;
		}
	}
	printf("YES");
	end:
	return 0;
}

