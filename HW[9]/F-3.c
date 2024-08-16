#include <stdio.h>

void func(char* number)
{
for(int i=0; i<10; i++)
	{
		int n=0;
		for(int j=0; j<1000; j++)
		{
			if(number[j]==(i+48)) n++;
		}
		if(n!=0)
		{
			printf("%d %d\n", i, n);
		}
	}	
}

int main(int argc, char **argv)
{
	char number[1001]="";
	scanf("%s", number);
	func(number);
	return 0;
}
