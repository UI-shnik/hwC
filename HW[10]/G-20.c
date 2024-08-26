#include <stdio.h>

int is_palindrom(char str[]);

int main(int argc, char **argv)
{
	FILE *f;
	char c, str[1001]={0};
	int i=0, ans;
	f=fopen("input.txt", "r");
	while((c=fgetc(f))!=EOF)
	{
		if(c>0x20)
		{
			str[i]=c;
			i++;
		}
	}
	fclose(f);
	ans=is_palindrom(str);
	(ans>0)? printf("YES"): printf("NO");
	return 0;
}

int is_palindrom(char str[])
{
	int size=0, i=0, counter=0, center_flag=0, center_counter=0, odd_counter=0;
	char element;
	while(str[i]!='\0')
	{
		i++;
	}
	size=i;
	i=0;
	if(size%2==0)
	{
		for(i=0; i<size; i++)
		{
			element=str[i];
			for(int j=0; j<size; j++)
			{
				if(element==str[j])
				{
					counter++;
				}
			}
			if(counter%2!=0)
			{
				return 0;
			}
			counter=0;
		}
	}
	else
	{
		for(i=0; i<size; i++)
		{
			element=str[i];
			for(int j=0; j<size; j++)
			{
				if(element==str[j])
				{
					counter++;
				}
			}
			if(counter%2!=0)
			{
				odd_counter++;
				if(center_flag==0)
				{
					center_counter=counter;
					center_flag=1;
				}
				if(center_counter!=counter)
				{
					return -1;
				}
				if(odd_counter>center_counter)
				{
					return -1;
				}				
			}
			counter=0;
		}
	}
	return 1;
}


