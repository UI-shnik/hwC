#include <stdio.h>
int* input()
{
	static int array[5]={0};
	for(int i=0; i<5; i++)
		{
		scanf("%d", &array[i]);
		}
	return array;
}

float averageNum(int arr[])
{
	int ans = 0;
	for(int i=0; i<5; i++)
		{
		ans=ans+arr[i];
		}
	return ans/5.;
}

int main(int argc, char **argv)
{
	printf("%.3f", averageNum(input()));
	return 0;
}

