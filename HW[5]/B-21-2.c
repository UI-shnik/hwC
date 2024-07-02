

#include <stdio.h>

int main(int argc, char **argv)
{
	char c;

	while((c=getchar())!='.'){
		if(c>=0x41 && c<=0x5A){
		printf("%c", c+0x20);
		} else printf("%c", c);
	}
	return 0;
}

