#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *fin, *fout;
	int small=0, big=0;
	char c;
	fin=fopen("input.txt", "r");
	while((c=fgetc(fin))!=EOF)
	{
		if(c>=0x41 && c<=0x5A)
		{
			big++;
		}
		else if(c>=0x61 && c<=0x7A)
		{
			small++;
		}
	}
	fclose(fin);
	fout=fopen("output.txt", "w");
	fprintf(fout, "%d %d", small, big);
	fclose(fout);
	return 0;
}


