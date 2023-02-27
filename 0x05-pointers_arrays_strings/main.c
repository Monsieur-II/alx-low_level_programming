#include "main.h"
#include <stdio.h>
int main()
{
	int n = 8;
	int *p = &n;

	reset_to_98(p);
	printf("%d\n", n);
	return (0);
}	
