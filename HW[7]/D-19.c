
#include <stdio.h>
int acounter(void)
{
	int counter=0;
	char c='.';
	scanf("%c", &c);
	if(c=='a')counter++;
	if(c!='.') counter=counter+acounter();
	return counter;
}

int main(int argc, char **argv)
{
	printf("%d",acounter());
	return 0;
}

