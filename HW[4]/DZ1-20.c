#include <stdio.h>

int main(int argc, char **argv)
{
	
	int Number1;
	int Number2;
	int Number3;
	
	scanf("%d", &Number1);
	scanf("%d", &Number2);
	scanf("%d", &Number3);

	if( (Number1+Number3 > Number2) && (Number2+Number3 > Number1) && (Number1+Number2 > Number3) )
		{
			printf("YES");
		}

	else
		{
			printf("NO");
		}

	return 0;
}
