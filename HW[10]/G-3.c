#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *fin, *fout;
	char lastElement, c;
	int i=0, j=0;
	fin=fopen("input.txt", "r");
	fout=fopen("output.txt", "w");
	if(fin!=NULL && fout!=NULL)
	{
		while((c=fgetc(fin))!='\n')
		{
			lastElement=c;
			i++;
			j=(i-1);
		}
		fseek(fin,-(sizeof(char)*(i+1)), SEEK_END);
		i=0;
		while((c=fgetc(fin))!='\n')
		{
			if(c==lastElement && i!=j)
			{
				fprintf(fout, "%d ", i);
			}
			i++;
		}
	}
	fclose(fin);
	fclose(fout);
	return 0;
}

