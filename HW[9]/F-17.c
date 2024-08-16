#include <stdio.h>


void input(int m[][5]);
int sled(int m[][5]);

int main(int argc, char **argv)
{
	int m[5][5]={0};
	input(m);
	printf("%d", sled(m));
	return 0;
}

void input(int m[][5])
{
	int j=0;	
	while(j!=5)
	{
		for(int i=0; i<5; i++)
		{
			scanf("%d", &m[j][i]);
		}	
	j++;
	}
}

int sled(int m[][5])
{
	int sum=0;	
	for(int i=0; i<5; i++)
	{
		sum=sum+m[i][i];
	}	
	return sum;
}
