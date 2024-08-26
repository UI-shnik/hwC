#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *fin, *fout;
	char c;
	fin=fopen("input.txt", "r");
	fout=fopen("output.txt", "w");
	while((c=getc(fin))!=EOF)
	{
		switch (c)
		{
			case 'a':
				fprintf(fout, "b");
				break;
			case 'b':
				fprintf(fout, "a");
				break;
			case 'A':
				fprintf(fout, "B");
				break;
			case 'B':
				fprintf(fout, "A");
				break;
			default:
				fprintf(fout, "%c", c);
				break;
		}
	}
	fclose(fin);
	fclose(fout);
	return 0;
}
