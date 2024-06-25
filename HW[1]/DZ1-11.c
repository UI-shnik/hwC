#include <stdio.h>

int main(int argc, char **argv)
{
	
	int Data[5];
	int Ans;
	
	for(int i=0;i<5;i++) scanf("%d", &Data[i]);
	
	Ans=Data[0];
	
	for(int i=1;i<5;i++){
		
		if(Ans>Data[i]) Ans=Data[i];
		
		}

	printf("%d", Ans);

	return 0;
}


