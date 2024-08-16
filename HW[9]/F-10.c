#include <stdio.h>

int input(char*);
void string_compress(char* dataString, char* answerString);

int main(int argc, char **argv)
{
	char str[1001];//[a,b,c,d,\0] - size=4+1; 
	char ans[2003];//[a,1,b,1,c,1,d,1,\0] - size=(4*2)+1;
	int stringRealSize;
	if((stringRealSize=input(str))>0)
	{
		string_compress(str, ans);
	}
	printf("%s", ans);
	return 0;
}

int input(char* arr)
{
	char c;
	int i=0;
	while((c=getchar())!='.')
	{
		arr[i++]=c;
	}
	arr[i++]='\0';
	return --i;
}

void string_compress(char* dataString, char* answerString)
{
	int index1=1,index2=0;
	int elementCounter=1;
	int p=1, n=0;
	char element=dataString[0];
	while (element!='\0')
	{
		if(dataString[index1]==element)
		{
			elementCounter++;
			index1++;
		}
		else
		{
			answerString[index2]=element;
			index2++;
			while(elementCounter/(10*p)!=0)
			{
				p=p*10;
			}
			for(int i=1; i<=p; i=i*10)
			{
				answerString[index2]=(char)(((elementCounter/(p/i)) - (n*10))+48);
				n=elementCounter/(p/i);
				index2++;	
			}
			n=0, p=1;
			element=dataString[index1];
			elementCounter=1;
			index1++;
		}	
	}
	answerString[index2]='\0';
}
