#include <stdio.h>

void input(int m[]);
void element_change(int n, int m[]);
void output(int m[]);
int even_or_odd(int m[]);
int if_odd(int n);
int if_even(int n);

int main(int argc, char **argv)
{
	int m[10]={0};
	int n=0;
	input(m);
	n=even_or_odd(m);
	element_change(n, m);
	output(m);
	return 0;
}

void input(int m[])
{
	for(int i=0; i<10; i++)
	{
		scanf("%d", &m[i]);
	}	
}

int even_or_odd(int m[])
{
	int ans=0;
	for(int i=0; i<10; i++)
	{
		ans= (m[i]%2==0)? ans+1: ans-1;
	}
	return ans;
}

void element_change(int n, int m[])
{
	if(n>0)
	{
		for(int i=0;i<10; i++)
		{
			if(m[i]%2==1)
			{
				m[i]=if_odd(m[i]);
			}
		}
	}
	else
	{
		for(int i=0;i<10; i++)
		{
			if(m[i]%2==0)
			{
				m[i]=if_even(m[i]);
			}
		}
	}
}

int if_odd(int n)
{
	int ans=1;
	while(n/10!=0)
	{
		if((n%10)%2==1)
		{
			ans=ans*(n%10);
		}
		n=n/10;
	}
	if((n%10)%2==1)
	{
		ans=ans*(n%10);
	}
	return ans;
}

int if_even(int n)
{
	int ans=1, flag=0;
	while(n/10!=0)
	{
		if((n%10)%2==0 && (n%10)!=0)
		{
			ans=ans*(n%10);
			flag++;
		}
		n=n/10;
	}
	if((n%10)%2==0)
	{
		ans=ans*(n%10);
		flag++;
	}
	if(flag!=0) return ans;
	return 0;
}

void output(int m[])
{
	for(int i=0; i<10; i++)
	{
		printf("%d ", m[i]);
	}	
}
