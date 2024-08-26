#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *f;
	char c;
	int counter=0, a_was_find=0;
	f=fopen("input.txt", "r");
	while((c=fgetc(f))!=EOF)
	{
		if(c=='a') 
		{
			a_was_find=1;
		}
		if(c!='a' && c!=' ') 
		{
			a_was_find=0;
		}
		if(a_was_find && c==' ') 
		{
			counter++;
		}
	}
	fseek(f, -2, SEEK_END);
	if((c=fgetc(f))=='a')
	{
		counter++;
	}
	fclose(f);
	f=fopen("output.txt", "w");
	fprintf(f, "%d", counter);
	fclose(f);
	return 0;
}




