#include <stdio.h>

void Ling_print(FILE*);

int main(int argc, char **argv)
{
	FILE *fin, *fout;
	fin=fopen("input.txt","r");
	fout=fopen("output.txt","w");
	char c, c1, c2;
	while((c=fgetc(fin))!=EOF)
	{
		restart:
		if(c=='C')
		{
			c1=fgetc(fin);
			if(c1=='a')
			{
				c2=fgetc(fin);
				if(c2=='o')
				{
					Ling_print(fout);
				}
				else if(c==EOF)
				{
					break;
				}
				else
				{
					fprintf(fout,"%c%c", c, c1);
					c=c2;
					goto restart;
				}
			}
			else if(c==EOF)
			{
				break;
			}
			else
			{
				fprintf(fout,"%c", c);
				c=c1;
				goto restart;
			}
		}
		else
		{
			fprintf(fout,"%c", c);
		}
	}
	fclose(fin);
	fclose(fout);
	return 0;
}

void Ling_print(FILE* f)
{
	fprintf(f, "Ling");
}
