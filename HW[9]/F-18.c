#include <stdio.h>

void input(int m[][10]);
int max_in_str(int* str);

int main(int argc, char **argv)
{
	int m[10][10]={0};
	int ans=0;
	input(m);
	for(int i=0;i<10; i++)
	{
		ans=ans+max_in_str(m[i]);
	}
	printf("%d", ans);
	return 0;
}

void input(int m[][10])
{
	int j=0;	
	while(j!=10)
	{
		for(int i=0; i<10; i++)
		{
			scanf("%d", &m[j][i]);
		}	
	j++;
	}
}

int max_in_str(int* str)
{
	int max=str[0];
	for(int i=1; i<10; i++)
	{
		if(max<str[i])
		{
			max=str[i];
		}
	}
	return max;
}
