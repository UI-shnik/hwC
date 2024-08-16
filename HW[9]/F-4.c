#include <stdio.h>

void input(char* str)
{
	char c;
	int i=0;
	while((c=getchar())!='\n' )
	{
		str[i]=c;
		i++;
	}
}

void print_digit(char s[])
{
	for(int i=0; i<10; i++)
	{
		int n=0, j=0;
		while(s[j]!='.')
		{
			if(s[j]==(i+48)) 
			{
				n++;
			}
			j++;
		}
		if(n!=0)
		{
			printf("%d %d\n", i, n);
		}
	}	
}

int main(int argc, char **argv)
{
	char str[1001]="";
	input(str);
	print_digit(str);
	return 0;
}

