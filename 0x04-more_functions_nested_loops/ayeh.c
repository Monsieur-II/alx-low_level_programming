#include "main.h"
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
	_putchar('\n');

	r = _isdigit(5);
	r = _putchar(r + '0');

	return (0);
}
