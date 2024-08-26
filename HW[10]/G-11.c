#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *f;
	char c;
	int counter=0, a_was_find=0;
	int i=0, flag=0;
	f=fopen("input.txt", "r");
	do
	{
		c=fgetc(f);
		i++;
		if(c=='a') a_was_find=1;
		if(c!='a' && c!=' ' && c!=EOF) a_was_find=0;
		if(a_was_find && c==' ') counter++;
		if(c==EOF && (fseek(f, -2, SEEK_CUR), flag=1, (c=getc(f))=='a'))
		{
			counter++;
			break;
		} 
		if(flag)break;		
	}
	while(c!=EOF);
	fclose(f);
	f=fopen("output.txt", "w");
	fprintf(f, "%d", counter);
	fclose(f);
	return 0;
}




