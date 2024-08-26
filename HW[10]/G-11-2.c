#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *f;
	char c, c1;
	int counter=0, a_was_find=0;
	f=fopen("input.txt", "r");
	do
	{
		c=fgetc(f);
		if(c=='a') 
		{
			a_was_find=1;
		}
		if(c!='a' && c!=' ') 
		{
			a_was_find=0;
		}
		if((a_was_find && c==' ') || (c1=='a' && c==0x0A))
		{
			counter++;
			
		}
		c1=c;
	}
	while(c!=EOF);
	fclose(f);
	f=fopen("output.txt", "w");
	fprintf(f, "%d", counter);
	fclose(f);
	return 0;
}




