#include <stdio.h>

void Cao_print(FILE*);

int main(int argc, char **argv)
{
	FILE *fin, *fout;
	fin=fopen("input.txt","r");
	fout=fopen("output.txt","w");
	char c, c1, c2, c3;
	while((c=fgetc(fin))!=EOF)
	{
		restart:
		if(c=='L')
		{
			c1=fgetc(fin);
			if(c1=='i')
			{
				c2=fgetc(fin);
				if(c2=='n')
				{
					c3=fgetc(fin);
					if(c3=='g')
					{
						Cao_print(fout);
					}
					else if(c==EOF)
					{
						break;
					}
					else
					{
						fprintf(fout,"%c%c%c", c, c1, c2);
						c=c3;
						goto restart;
					}
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

void Cao_print(FILE* f)
{
	fprintf(f, "Cao");
}
