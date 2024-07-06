
#include <stdio.h>
int max_find(int max)
{
	int n=0;
	scanf("%d", &n);
	if(n==0)
		{
		return max;
		}
	if(n>max)
		{
		return max_find(n);
		}
	else
		{
		return max_find(max);
		}
	
}
int main(int argc, char **argv)
{
	int first_number;
	scanf("%d", &first_number);
	printf ("%d", max_find(first_number));
	return 0;
}

