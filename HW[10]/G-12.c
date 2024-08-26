#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *fin, *fout;
	fin=fopen("input.txt","r");
	fout=fopen("output.txt","w");
	int n=0;
	char str[1001]={0};
	while(n!=EOF)
	{
		if(n!=0)
		{
			fprintf(fout, "%s\n", str);
		}
		n=fscanf(fin, "%s ", str);
	}
	fclose(fin);
	fclose(fout);
	return 0;
}
