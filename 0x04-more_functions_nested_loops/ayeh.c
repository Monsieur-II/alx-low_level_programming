#include "main.h"
#include <stdio.h>
/** main - entry
 *
 * Return: 0
 */
int main(void)
{
	int r;

	r = _isupper('l');
	_putchar(r + '0');
	r = _isupper('C');
	_putchar(r + '0');

	r = mul(5, 7);
	printf("%d \n", r);
	_putchar('\n');
	print_numbers();
	print_most_numbers();
	more_numbers();
	print_line(7);
	
	return (0);
}
