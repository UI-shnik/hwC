#include <stdio.h>

int is_A_ending(char*);

int main(int argc, char **argv)
{
	FILE *f;
	int r=0, counter=0;
	char str[1001]={0};
	f=fopen("input.txt", "r");
	r=fscanf(f, "%s", str);
	while(r>0)
	{
		counter+=is_A_ending(str);
		r=fscanf(f, "%s", str);
	}
	fclose(f);
	f=fopen("output.txt", "w");
	fprintf(f, "%d", counter);
	fclose(f);
	return 0;
}

int is_A_ending(char* str)
{
	int i=0;
	char c=str[i];
	while(c!='\0')
	{
		i++;
		c=str[i];
	}
	if(str[i-1]=='a')
	{
		return 1;
	}
	return 0;
}
