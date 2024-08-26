#include <stdio.h>

int is_repeat(char c, FILE* f, int index);
int is_contain(char c, FILE* f, int index);

int main(int argc, char **argv)
{
	FILE *fin, *fout;
	char c;
	int i=0, j=0;
	fin=fopen("input.txt", "r");
	fout=fopen("output.txt", "a+");
	while((c=fgetc(fin))!=EOF)
	{
		if(c>0x20)
		{
			if(is_repeat(c, fin, i)==0)
			{
				fprintf(fout, "%c", c);
				j++;
				printf("%d ", j);
			}
			else
			{
				if(is_contain(c, fout, j)==0)
				{
					fprintf(fout, "%c", c);
					j++;
				}
			}
		}
		i++;
	}
	fclose(fin);
	fclose(fout);
	return 0;
}

int is_repeat(char c, FILE* f, int index)
{
	int counter=0;
	char c1;
	fseek(f, -(sizeof(char)*(index+1)), SEEK_CUR);//кур
	while((c1=fgetc(f))!=EOF)
	{
		if(c1==c)
		{
			counter++;
		}
	}
	fseek(f, (sizeof(char)*(index+1)), SEEK_SET);
	return --counter;
}

int is_contain(char c, FILE* f, int index)
{
	char c1;
	int counter=0;
	fseek(f, 0, SEEK_SET);
	while((c1=fgetc(f))!=EOF)
	{
		if(c1==c)
		{
			counter++;
		}
	}
	fseek(f, (sizeof(char)*(index+1)), SEEK_SET);
	return counter;
}

