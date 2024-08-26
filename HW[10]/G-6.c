#include <stdio.h>

int is_palindrom(char* str);

int main(int argc, char **argv)
{
	FILE *fin, *fout;
	char str[1001]={0}, c;
	int i=0;
	fin=fopen("input.txt", "r");
	while((c=getc(fin))!=0x0A)
	{
		str[i]=c;
		i++;
	}
	fclose(fin);
	fout=fopen("output.txt", "w");
	if(is_palindrom(str)==1)
	{
		fprintf(fout, "YES");
	}
	else
	{
		fprintf(fout, "NO");
	}
	fclose(fout);
	return 0;
}


int is_palindrom(char* str)
{
	int size=0;
	while(str[size]!=0)
	{
		size++;
	}
	size--;
	for(int i=0; i<=(size/2); i++)
	{
		if(str[i]!=str[size-i])
		{
			return 0;
		}
	}
	return 1;
}
