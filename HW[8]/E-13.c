#include <stdio.h>

const unsigned short int ARRAY_SIZE = 10;

void input(int* array, int array_size)
{
	for(int i=0; i<array_size; i++)
		{
		scanf("%d", &array[i]);
		}
}

void output(int* array, int array_size)
{
	for(int i=0; i<array_size; i++)
		{
		printf("%d ", array[i]);
		}
}

int isNullDecades(int number)
{
	return (number%100-number%10==0) ? 1 : 0;
}

void arrayFunc(int* array, int array_size)
{
	int element_counter=0;
	for(int i=0; i<array_size; i++)
		{
		if(isNullDecades(array[i])) element_counter++;
		}
	if(element_counter!=0)
		{
		int ans_array[element_counter];
		int j=0;
		for(int i=0; i<array_size; i++)
			{
			if(isNullDecades(array[i]))
				{
				ans_array[j]=array[i];
				j++;	
				}
			}
			output(ans_array, (int)sizeof(ans_array)/4);
		}
}


int main(int argc, char **argv)
{
	int data[ARRAY_SIZE];
	input(data, (int)sizeof(data)/4);
	arrayFunc(data, (int)sizeof(data)/4);
	return 0;
}

