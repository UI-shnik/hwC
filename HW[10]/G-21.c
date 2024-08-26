#include <stdio.h>

int triangle_check(int);
void triangle_build(FILE*, int, int);

int main(int argc, char **argv)
{
	FILE *f;
	char c;
	int rockCounter=0,osn=0;
	f=fopen("input.txt", "r");
	while((c=fgetc(f))!=EOF)
	{
		if(c=='*')
		{
			rockCounter++;
		}
	}
	fclose(f);
	f=fopen("output.txt", "w");
	if((osn=triangle_check(rockCounter))>0)
	{
		triangle_build(f, rockCounter, osn);
	}
	else
	{
		fprintf(f, "NO");
	}
	fclose(f);
	return 0;
}

int triangle_check(int rc)
{
	if(rc<3) return 0;
	int usingRocks=0, i=0;
	while(rc>usingRocks)
	{
		i++;
		usingRocks=usingRocks+i;
	}
	if(usingRocks==rc)
	{
		return i;
	}
	return 0;
}

void triangle_build(FILE* f, int rc, int osn)
{
	int rockInStr=osn;
	while(osn>0)
	{
		for(int i=0; i<(osn-1); i++)
		{
			fprintf(f, " ");
		}
		for(int i=osn; i<=rockInStr; i++)
		{
			fprintf(f, "* ");
		}		
		fprintf(f, "\n");
		osn--;
	}
}
