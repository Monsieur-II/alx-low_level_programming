#include "main.h"
#include <stdio.h>
int main()
{
	int n = 8;
	int *p = &n;
	char *str;
	char *k;


	reset_to_98(p);
	printf("%d\n", n);	
	str = "School";
	printf("%d\n", _strlen(str));
	
	k = "My love";
	print_rev(k);


	return (0);
}	
