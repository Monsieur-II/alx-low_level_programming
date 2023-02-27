#include "main.h"
#include <stdio.h>
int main()
{
	int n = 8;
	int *p = &n;

	reset_to_98(p);
	printf("%d\n", n);	
	char s[7] = "School";
	char *str = s;
	printf("%d\n", _strlen(str));

	return (0);
}	
