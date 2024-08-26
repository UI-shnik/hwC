#include <stdio.h>

int main(int argc, char **argv)
{
	FILE* f;
	char c, str[101]={0};
	int i=0;
	f=fopen("input.txt", "r");
	if(f!=NULL)
	{
		while((c=fgetc(f))!=EOF)
		{
			if(c!=0x0A)
			{
				str[i]=c;
				i++;
			}
		}
		fclose(f);
		f=fopen("output.txt", "w");
		fprintf(f, "%s, %s, %s %d", str, str, str, i);
		fclose(f);
	}
	return 0;
}

