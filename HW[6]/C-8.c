#include <stdio.h>
char func(char);
int main(int argc, char **argv)
{
	char c=0x20;
	scanf("%c", &c);
	while(c!='.'){
		printf("%c", func(c));
		scanf("%c", &c);
		}

	return 0;
}

char func(char c){
	if(c>=0x61 && c<=0x7A){
		return c-0x20;
	} else
	{
		return c;	
		}
	}
