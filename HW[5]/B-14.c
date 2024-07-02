

#include <stdio.h>

int main(int argc, char **argv)
{
	int number;
	int counter=-1;
	do
		{
		scanf("%d", &number);
		counter++;
		}
	while (number!=0);

	printf("%d", counter);
	
	return 0;
}

