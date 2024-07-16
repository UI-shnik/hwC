#include <stdio.h>

#define ARRAY_SIZE 10

void input(int* , int);
void output(int* , int);
void arraySort(int*, int*, int*, int);

int main(int argc, char **argv)
{
	int data[ARRAY_SIZE];
	int positiv_elements[ARRAY_SIZE]={0};
	int negativ_elements[ARRAY_SIZE]={0};
	input(data, ARRAY_SIZE);
	arraySort(data, positiv_elements, negativ_elements, ARRAY_SIZE);
	output(positiv_elements, ARRAY_SIZE);
	output(negativ_elements, ARRAY_SIZE);
	return 0;
}

void input(int* arr, int arr_size)
{
	for(int i=0; i<arr_size; i++)
		{
		scanf("%d ", &arr[i]);
		}
}

void output(int* arr, int arr_size)
{
	for(int i=0; i<arr_size; i++)
		{
		if(arr[i]==0) break;
		printf("%d ", arr[i]);
		}
}

void arraySort(int* data, int* p_arr, int* n_arr, int arr_size)
{
	int j=0;// счётчик отрицательных элементов
	int k=0;// счётчик положительных элементов
	for(int i=0; i<arr_size;i++)
		{
		if(data[i]<0) n_arr[j]=data[i], j++;
		else if(data[i]>0)p_arr[k]=data[i], k++;
		}
}
