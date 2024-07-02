#include <stdio.h>
short int digit_to_num(char c){
	if(c>=0x30 && c<=0x39) return (int)(c-0x30);
	return -1;
	}

int main(int argc, char **argv)
{
	int counter =0;
	char c=0x20;
	scanf("%c", &c);
	while(c!='.'){
		if(digit_to_num(c)!=-1){
			//printf("-%d-", digit_to_num(c));
			counter=counter+digit_to_num(c);
			}
		scanf("%c", &c);
		}
	printf("%d", counter);
	return 0;
}
