#include <stdio.h>

int main(int argc, char **argv)
{
	
	int X1;
	int X2;
	int Y1;
	int Y2;
	float X0=0.0f;
	
	 scanf("%d", &X1);
	 scanf("%d", &Y1);
	 scanf("%d", &X2);
	 scanf("%d", &Y2);
	 
/*					Уравнение прямой через две точки:
 * 
 *							x-x1   y-y1
 * 							---- = ----		(1)
 * 							x2-x1 y2-y1
 * 
 * 				Уравнение прямой с угловым коэфициентом:
 * 
 * 								y=kx+b		(2)
 *  
 */
	
	float b = (((X0-X1)/(X2-X1))*(Y2-Y1))+Y1;
	float k=0.0f;
	
	if(X1!=0){
		 k = (Y1-b)/X1;
	} else{
		 k = (Y2-b)/X2;
	}
		
	printf("%f\n%f",k, b);

	return 0;
}
