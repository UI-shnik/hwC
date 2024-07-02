

#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{
	char c;

	while((c=getchar())!='.'){
		printf("%c", tolower(c));
		}
	return 0;
}

