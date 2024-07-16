#include <stdio.h>

//const int ARRAY_SIZE = 10;
#define ARRAY_SIZE 10
void input(int* array, int array_size)
{
	for(int i=0; i<array_size; i++)
		{
		scanf("%d", &array[i]);
		}
}

void output(float* array, int array_size)
{
	for(int i=0; i<array_size; i++)
		{
		if(array[i]-(int)array[i]!=0) break;
		printf("%d ", (int)array[i]);
		}
}

int findElement(float* array, int array_size, int element)
{
	int ans=0;
	for(int i=0; i<array_size;i++)
		{
		if(element==array[i]) 
			{
			ans=1; 
			break;
			}
		}
	return ans;
}

void arrayFunc(int* array, int array_size, float* ans_array, int ans_array_size)
{
	int j=0;
	int n;
	for(int k=0; k<array_size-1; k++)
		{
		n=array[k];
		for(int i=0; i<array_size; i++)
			{
			if(findElement(ans_array, ans_array_size, n)==0 && n==array[i] && i!=k){
				
				ans_array[j]=n;
				j++;
				break;
				}
			}
		}
}


int main(int argc, char **argv)
{
	int data[ARRAY_SIZE];
	float ans[ARRAY_SIZE];
	for(int i=0;i<ARRAY_SIZE; i++) ans[i]=0.5f;
	input(data, ARRAY_SIZE);
	output(ans, ARRAY_SIZE);
	arrayFunc(data, ARRAY_SIZE, ans, ARRAY_SIZE);
	output(ans, ARRAY_SIZE);
	return 0;
}

