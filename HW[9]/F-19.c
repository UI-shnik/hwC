#include <stdio.h>

void input(int m[][5]);
float diagonal_average(int str[][5]);
int element_counter(float threshold, int m[][5]);

int main(int argc, char **argv)
{
	int m[5][5]={0};
	input(m);
	float th = diagonal_average(m);
	int ans = element_counter(th, m);
	printf("%d", ans);
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

float diagonal_average(int m[][5])
{
	int sum=0;	
	for(int i=0; i<5; i++)
	{
		sum=sum+m[i][i];
	}	
	return (sum/5.);
}

int element_counter(float threshold, int m[][5])
{
	int numOfElements=0;
	int j=0;	
	while(j!=5)
	{
		for(int i=0; i<5; i++)
		{
			if(m[j][i]>threshold) numOfElements++;
		}	
	j++;
	}
	return numOfElements;
}
