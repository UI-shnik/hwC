

#include <stdio.h>

int main(int argc, char **argv)
{
	int num=0;
	int data[10];
	int check=1;
	int digit=-1;
	int counterOne=0;
	int counterTwo=0;
	
	scanf("%d", &num);
	
	for(int i=0;i<10;i++) data[i]=-1;
	
	while((num/check)!=0){
		digit =((num%(10*check))/check);
		data[digit]=digit;
		check=check*10;
		counterOne++;
		if(counterOne>10) {
				printf("YES");
				goto end;
			}
		}
		
	for(int i=0;i<10;i++){
		if(data[i]==i)counterTwo++;
		}
	
	if(counterOne==counterTwo) printf("NO");
	else printf("YES");	
	
	end:
	return 0;
}

