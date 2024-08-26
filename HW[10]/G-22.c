#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *f;
	f=fopen("input.txt","r");
	char c, str[4];
	char c0=' ';
	short first=1, i=0;
	for(int j=0; j<4; j++) str[j]='0';
	while((c=fgetc(f))!=EOF && i<4)
	{
		if(first)
		{
			str[i]=c;
			i++;
		}
		if(!first && c0!='b' && c0!='f' && c0!='p' && c0!='v' && (c=='b'||c=='f'||c=='p'||c=='v'))
		{
			c0=c;
			str[i]='1';
			i++;
			goto cycle_end;
		}
		else if(!first && c0!='c' && c0!='g' && c0!='j' && c0!='k' && c0!='q' && c0!='s' && c0!='x' && c0!='z' && (c=='c'||c=='g'||c=='j'||c=='k'||c=='q'||c=='s'||c=='x'||c=='z'))
		{
			c0=c;
			str[i]='2';
			i++;
			goto cycle_end;
		}
		else if(!first && c0!='d' && c0!='t' && (c=='d'||c=='t'))
		{
			c0=c;
			str[i]='3';
			i++;
			goto cycle_end;
		}
		else if(!first && c0!='l' &&c=='l')
		{
			c0=c;
			str[i]='4';
			i++;
			goto cycle_end;
		}
		else if(!first && c0!='m' && c0!='n' && (c=='m'||c=='n'))
		{
			c0=c;
			str[i]='5';
			i++;
			goto cycle_end;
		}
		else if(!first && c0!='r' && c=='r')
		{
			c0=c;
			str[i]='6';
			i++;
		}
		first=0;
		cycle_end:;
	}
	fclose(f);
	f=fopen("output.txt", "w");
	for(int i=0; i<4;i++)
	{
		fprintf(f, "%c", str[i]);
	}
	fclose(f);
	return 0;
}

