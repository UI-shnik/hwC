#include <stdio.h>
short int is_digit(char c){
	if(c>=0x30 && c<=0x39) return 1;
	return 0;
	}

int main(int argc, char **argv)
{
	int counter =0;
	char c=0x20;
	scanf("%c", &c);
	while(c!='.'){
		if(is_digit(c)==1){
			counter++;
			}
		scanf("%c", &c);
		}
	printf("%d", counter);
	return 0;
}

