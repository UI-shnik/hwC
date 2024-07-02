

#include <stdio.h>

int main(int argc, char **argv)
{
	int num=0;
	
	scanf("%d", &num);
	
	if(num>99 && num<1000) printf("YES");
	else printf("NO");
		
	return 0;
}

