#include <stdio.h>
const short unsigned int ARR_SIZE=12;
void input(int* arr, int arr_size)
{
	for(int i=0; i<arr_size/4; i++)
		{
		scanf("%d", &arr[i]);
		}
}

void reverseArrayAgain(int* arr, int arr_size)
{
	int m=0;
	for(int i=0; i<(arr_size/4/3/2); i++)//       /4 - получение числа символовиз числа байтов, /3 - инвертируем каждую ТРЕТЬ массива, /2 - что бы не провести двойное инвертирование.
		{
		m=arr[i];
		arr[i]=arr[3-i];
		arr[3-i]=m;
		
		m=arr[i+4];
		arr[i+4]=arr[7-i];
		arr[7-i]=m;
		
		m=arr[i+8];
		arr[i+8]=arr[11-i];
		arr[11-i]=m;
		}
}

void output(int* arr, int arr_size)
{
	for(int i=0; i< arr_size/4;i++)
		{
		printf("%d ", arr[i]);
		}
}

int main(int argc, char **argv)
{
	int data[12];
	input(data, (short)sizeof(data));
	reverseArrayAgain(data, (short)sizeof(data));
	output(data, (short)sizeof(data));
	return 0;
}

