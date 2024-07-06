


#include <stdio.h>

int main(int argc, char **argv)
{
	int FirstNumber=0;
	int SecondNumber=0;
	int ThirdNumber=0;
	float SrAr=0.0f;
	
	scanf("%d", &FirstNumber);
	scanf("%d", &SecondNumber);
	scanf("%d", &ThirdNumber);
	
	SrAr=(FirstNumber+SecondNumber+ThirdNumber)/3.;
	
	printf("%.2f", SrAr);
		
	return 0;
}
