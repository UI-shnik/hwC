#include <stdio.h>
#define SIZE 27

void counter_init(short lettersCounter[], const int size);
void polindrom_builder(FILE* f, short lettersCounter[], const int size);
void poli_print(FILE* f, char c, int num);

int main(int argc, char **argv)
{
	FILE *f;
	short lettersCounter[SIZE], index;
	char c;
	counter_init(lettersCounter, SIZE);
	f=fopen("input.txt", "r");
	while((c=fgetc(f))!=EOF && 0x0A!=c)
	{
		index=(int)(c-0x61);
		lettersCounter[index]++;
	}
	fclose(f);
	f=fopen("output.txt", "w");
	polindrom_builder(f, lettersCounter, SIZE);
	fclose(f);
	return 0;
}

void counter_init(short lettersCounter[],const int size)
{
	for(int i=0;i<size; i++)
		lettersCounter[i]=0;
}

void polindrom_builder(FILE* f, short lettersCounter[], const int size)
{
	short oddIndex=-1;
	for(int i=0; i<size; i++)
	{
		if(lettersCounter[i]!=0 && lettersCounter[i]%2==0)
			poli_print(f, i+0x61, lettersCounter[i]/2);
		else if(lettersCounter[i]!=0 && lettersCounter[i]%2!=0)
		{
			if(oddIndex==-1)
			{
				poli_print(f, i+0x61, lettersCounter[i]/2);
				oddIndex=i;
			}
			else
				poli_print(f, i+0x61, lettersCounter[i]/2);
		}
	}
	if(oddIndex!=-1)
		poli_print(f, oddIndex+0x61, 1);
	for(int i=(size-1); i>=0; i--)
		poli_print(f, i+0x61, lettersCounter[i]/2);
}

void poli_print(FILE* f, char c, int num)
{
	for(int i=0; i<num; i++)
		fprintf(f, "%c", c);
}
