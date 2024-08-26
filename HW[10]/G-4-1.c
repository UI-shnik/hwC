#include <stdio.h>
#define SIZE 101

void clean_string(char* str);
void go_second_word(FILE* f);
void output(FILE* f, char* str);
int comp(FILE* f, char* str, char c, int i);

int main(int argc, char **argv)
{
	FILE* f;
	char str[SIZE]={0};
	char c;
	int i=0, j=0;
	f=fopen("input.txt", "r");
	while((c=fgetc(f))!=' ')
	{
		go_second_word(f);
		i=comp(f, str, c, i);
		j++;
		fseek(f, (sizeof(char)*j), SEEK_SET);
	}
	//printf("%s", str);
	clean_string(str);
	//printf("(%s)", str);
	fclose(f);
	f=fopen("output.txt", "w");
	output(f, str);
	fclose(f);
	return 0;
}

void go_second_word(FILE* f)
{
	char c;
	while((c=fgetc(f))!=' ')
	{
	}
}

int comp(FILE* f, char* str, char c, int i)
{
	int counter=0;
	char element;
	while((element=getc(f))!='\n')
	{
		if(c==element)
		{
			counter++;
		}
	}
	if(counter==1)
	{
		str[i]=c;
		i++;
	}
	return i;
}

void clean_string(char* str)
{
	char c;
	int j=0, i=0, counter=0;
	while(str[j]!=0)
	{
		c=str[j];
		while(str[i]!=0)
		{
			if(c==str[i])
			{
				counter++;
			}
			i++;
		}
		if(counter>1)
		{
			//int delCounter=counter-1;
			for(int z=100; z>=0; z--)
			{
				if(c==str[z] && counter)
				{
					str[z]='-';
					counter--;
				}
			}
		}
		counter=0;
		j++;
		i=0;
	}
	
}

void output(FILE* f, char* str)
{
	int i=0;
	while(str[i]!=0)
	{
		if(str[i]!='-')
		{
			fprintf(f, "%c ", str[i]);
		}
		i++;
	}
}
