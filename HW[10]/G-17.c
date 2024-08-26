#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *fin, *fout;
	fin=fopen("input.txt","r");
	fout=fopen("output.txt","w");
	char c, c1;
	int counter=0, spaceCounter=0;
	while(((c=fgetc(fin))!=EOF) && c!= 0x0A)
	{
		if(c!=' ')
		{
			counter++;
			if(counter%2==0)
			{
				fprintf(fout, "%c", c);
				fprintf(fout, "%c", c1);
			}
			else
			{
				c1=c;
			}
		}
		else
		{
			if(counter%2==0)
			{
				fprintf(fout, " ");
			}
			else
			{
				while(((c=fgetc(fin))!=EOF) && c!= 0x0A && c==' ')
				{
					spaceCounter++;
				}
				fprintf(fout, "%c", c);
				for(int i=0; i<=spaceCounter; i++)
				{
					fprintf(fout, " ");
				}
				spaceCounter=0;
				fprintf(fout, "%c", c1);
				counter++;
			}
		}
	}
	if(counter%2!=0)
	{
		fprintf(fout, "%c",c1);
	}
	fclose(fin);
	fclose(fout);
	return 0;
}
