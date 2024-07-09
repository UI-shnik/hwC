#include <stdio.h>

int main(int argc, char **argv)
{
	
	int Data[5];
	int Max;
	int Min;
	
	for(int i=0;i<5;i++) scanf("%d", &Data[i]);
	
	Max=Data[0];
	Min=Data[0];
	
	for(int i=1;i<5;i++){
		
		if(Max<Data[i]) Max=Data[i];
		if(Min>Data[i]) Min=Data[i];
		
		}

	printf("%d", Max+Min);

	return 0;
}
