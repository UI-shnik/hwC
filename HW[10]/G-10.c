#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *f, *fout;
	char c;
	f=fopen("input.txt", "r");
	int i=0, indexWord=0, lenWord=0, indexWordMax=0, lenWordMax=0;
	while((c=fgetc(f))!=EOF)
	{
		if(c!=' ')
		{
			lenWord++;
		}
		else
		{
			if(lenWord>lenWordMax)
			{
				lenWordMax=lenWord;
				indexWordMax=indexWord;
			}
			indexWord++;
			lenWord=0;
		}
	}
	fseek(f, 0, SEEK_SET);
	fout=fopen("output.txt", "w");
	while(i!=indexWordMax)
	{
		c=fgetc(f);
		if(c==' ')
		{
			i++;
		}
	}
	c=fgetc(f);
	while(c>0x20)
	{
		fprintf(fout, "%c", c);
		c=fgetc(f);
	}
	fclose(f);
	fclose(fout);
	return 0;
}




