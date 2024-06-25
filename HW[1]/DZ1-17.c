#include <stdio.h>

int main(int argc, char **argv)
{
	
	int X1;
	int X2;
	int X3;
	
	 scanf("%d", &X1);
	 scanf("%d", &X2);
	 scanf("%d", &X3);

	if(X1<X2 && X2<X3){
		printf("YES");
	} else {
		printf("NO");
		}

	return 0;
}
