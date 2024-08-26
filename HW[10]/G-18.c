#include <stdio.h>

int space_killer(FILE*);

int main(int argc, char **argv)
{
	FILE *fin, *fout;
	fin=fopen("input.txt","r");
	fout=fopen("output.txt","w");
	char c;
	short isFirst=1;
	while((c=fgetc(fin))!=EOF)
	{
		if(c==0x20)
		{
			space_killer(fin);
		}
		if(c!=' '|| isFirst==0)
		{
			fprintf(fout, "%c", c);
		}
		isFirst=0;
	}
	fclose(fin);
	fclose(fout);
	return 0;
}

int space_killer(FILE* f)
{
	char c;
	int sc=1;
	while((c=fgetc(f))==0x20)
	{
		sc++;
	}
	fseek(f, -1, SEEK_CUR);
	return sc;
}
