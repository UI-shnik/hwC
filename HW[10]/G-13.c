#include <stdio.h>

void str_printf(FILE* f, char* str, int point_index);

int main(int argc, char **argv)
{
	FILE *f;
	int point_i=0, format_found=1, length=0, i=0;
	char str[1001]={0};
	char c;
	f=fopen("input.txt","r");
	if(f!=NULL)
	{
		fscanf(f, "%s", str);
	}
	fclose(f);
	while(str[length]!='\0')
	{
		length++;
	}
	while(str[length-i-1]!='.' && i<length)
	{
		i++;
	}
	f=fopen("output.txt","w");
	point_i=length-i-1;
	i=0;
	if(point_i==-1)
	{
		str_printf(f, str, point_i);
	}
	else
	{
		do
		{
			i++;
			c=str[point_i+i];
			if((c<0x61 || c>0x7A)&& c!='\0')
			{
				str_printf(f, str, -1);
				format_found=0;
				printf("bitch");
				break;
			}
		}
		while(c!='\0');
		if(format_found)
		{
			str_printf(f, str, point_i);
		}
	}
	fclose(f);
	return 0;
}

void str_printf(FILE* f, char* str, int point_index)
{
	if(point_index==-1)
	{
		fprintf(f, "%s.html", str);
	}
	else
	{
		for(int i=0; i<=point_index; i++)
		{
			fprintf(f, "%c", str[i]);
		}
		fprintf(f, "html");
	}
}
