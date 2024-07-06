
#include <stdio.h>
void reverse_string()
	{
	char c = getchar();
	if (c!='.'){
		reverse_string();
		printf("%c", c);
		} 
	}
int main(int argc, char **argv)
{
	reverse_string();
	return 0;
}

