#include <stdio.h>
#include <math.h>
const float PI=3.14159265;

long long factorial(int x){
	long long ans=1;
	for(int i=x;i>=1; i--){
		ans=ans*i;
		}
	return ans;
	}

float cosinus(float x){
	double ans=0.0;
	for(int i=0; i<11; i++){
		ans=ans+(pow(-1,i)*pow(x,(2*i)))/factorial(2*i);
	/*	printf("||%f*\n", ans);
		printf("  %f  \n", pow(-1,i));
		printf("  %f  \n", pow(x,(2*i)));
		printf("  %lld ||\n", factorial(2*i));
	*/
		}
	return ans;
	}

int main(int argc, char **argv)
{
	float x=0;
	int gr=0;
	//start:
	scanf("%d", &gr);
	x=gr*0.0174533;
	while(x>(2*PI)){
		x=x-(2*PI);
		//printf("||%f||", x);
		}
	printf("%.3f", cosinus((float)x));
	//goto start;
	return 0;
}

