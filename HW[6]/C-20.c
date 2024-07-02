#include <stdio.h>

int main(int argc, char **argv)
{
	char str[1000];
	for(int i=0; i<1000; i++){str[i]='U';}
	int n=0;
	scanf("%c", &str[0]);
	while(str[n]!='.'){
		scanf("%c", &str[n+1]);
		n++;
		}
	int fwd=0;
	int back=0;
	int count=0;
	int flag=0;
	for(int i=0;i<1000;i++){
		if(str[i]=='.')break;
		count++;
		if(str[i]=='(')fwd++;
		if(str[i]==')')back++;
		if(back>fwd){
			flag=1;
			break;
			}
		}
		if(fwd==back && flag==0 && count%2==0){
			printf("YES");
			} else {
			printf("NO");
				}
	return 0;
}

