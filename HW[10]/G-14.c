#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *fin, *fout;
	fin=fopen("input.txt","r");
	fout=fopen("output.txt","w");
	fprintf(fout, "Hello, ");
	char c;
	while((c=fgetc(fin))!=' ')
	{
	}
	while((c=fgetc(fin))!=' ')
	{
		fprintf(fout, "%c", c);
	}
	fprintf(fout, " ");
	fseek(fin, 0, SEEK_SET);
	while((c=fgetc(fin))!=' ')
	{
		fprintf(fout, "%c", c);
	}
	fprintf(fout, "!");
	fclose(fin);
	fclose(fout);
	return 0;
}

