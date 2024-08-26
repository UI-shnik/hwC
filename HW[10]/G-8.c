#include <stdio.h>

void sort_arr(int*, int);

int main(int argc, char **argv)
{
	FILE* f;
	f=fopen("input.txt", "r");
	char c;
	int n=0, arr[1000], flag0=0, flag1=0, i=0;
	while((c=fgetc(f))!=EOF)
	{
		flag0=0;
		if(c>=0x30 && c<=0x39)
		{
			n=(n*10)+((int)(c-48));
			flag0=1;
			flag1=1;
		}
		if(flag0==0 && flag1==1)
		{
			arr[i]=n;
			n=0;
			i++;
			flag1=0;
		}
	}
	fclose(f);
	sort_arr(arr, i);
	f=fopen("output.txt", "w");
	for(int j=0; j<i; j++)
	{
		fprintf(f, "%d ", arr[j]);
	}
	fclose(f);
	return 0;
}

void sort_arr(int* arr, int size)
{
	for(int j=0; j<(size-1); j++)
	{
		for(int i=1; i<(size-j); i++)
		{
			if(arr[i-1]>arr[i])
			{
				int n=arr[i];
				arr[i]=arr[i-1];
				arr[i-1]=n;
			}
		}
	}
}
