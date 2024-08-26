#include <stdio.h>

int main(int argc, char **argv)
{
	FILE* f;
	int n, j=1;
	char str[27]={0};
	f=fopen("input.txt", "r");
	if(f!=NULL)
	{
		fscanf(f, "%d", &n);
	}
	fclose(f);
	printf("%d", n);
	for(int i=0; i<n; i++)
	{
		str[i]= ((i+1)%2==0)? (0x32+i-j): (0x41+(i/2));
		if(0x32+i-j=='8')j=j+8;
	}
	f=fopen("output.txt", "w");
	if(f!=NULL)
	{
		fprintf(f, "%s", str);
	}
	fclose(f);
	return 0;
}

