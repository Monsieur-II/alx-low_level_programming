#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*void demo(int value)
{
	static int count = 0;
	count = count + value;
	printf("%d\n", count);
}
int main(void)
{
	int i;
	for (i = 1; i < 5; i++)
{
	demo(i);
}
return (0);
}
*/
int main (void)
{
	char *buffer = NULL;
	size_t n = 0;
	FILE * fp = fopen("textfile.txt", "r");

	if (getline(&buffer, &n, stdin) != -1)
		printf("%s", buffer);
	free(buffer);
	fclose(fp);
	return (0);
}
