#include <stdio.h>

int ABS(int number){
	return (number>=0)?number:-number;
	}

int main(int argc, char **argv)
{
	int num=0;
	scanf("%d", &num);
	printf("%d ", ABS(num));
	return 0;
}

