#include <stdio.h>

void color(char* str);

int main(int argc, char **argv)
{
	char str[]="i9";
	scanf("%2s", str);
	color(str);
	return 0;
}

void color(char* str)
{
	int c=-1;
	if(str[0]%2==0)
	{
		c=(str[1]%2==1)? 1: 0;
	}
	else
	{
		c=(str[1]%2==0)? 1: 0;
	}
	if (c==1) printf("WHITE");
	if (c==0) printf("BLACK");
}
