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

int minimum(int arr[])
{
	int ans = arr[0];
	for(int i=1; i<5; i++)
		{
		ans>arr[i] ? ans=arr[i]:ans;
		}
	return ans;
}

int main(int argc, char **argv)
{
	printf("%d", minimum(input()));
	return 0;
}

