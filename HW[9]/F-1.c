//#include <stdio.h>
void sort_array(int size, int a[])
{
	for(int i=0; i<size-1; i++)
	{
		for(int j=i+1; j<size; j++)
		{
			if(a[i]>a[j])
			{
				int n=a[i];
				a[i]=a[j];
				a[j]=n;
			}
		}
	}
}
/*
int main()
{
	int size=10;
	int arr[10]={1, 5, 2, 8, 5, 0, -3, 4, 3, 11};
	sort_array(size, arr);
	for(int i=0; i<10; i++)
	{
		printf("%d ", arr[i]);
	}
}
/*
