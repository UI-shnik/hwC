#include <stdio.h>

int input();

int main(int argc, char **argv)
{
	printf("%d", input());
	return 0;
}

int input()
{
	int sum=0;
	int element;
	int max=-1, min=1001;
	
	scanf("%d", &element);
	
	while(element!=0)
	{
		sum=sum+element;
		if(max<element) max=element;
		if(min>element) min=element;
		scanf("%d", &element);
	}
	
	for(int i=min;i<=max; i++)
	{
		sum=sum-i;
	}
	
	return sum*(-1);
}
