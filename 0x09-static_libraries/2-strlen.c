#include "main.h"
/**
 * _strlen - prints length of string pointed by *s
 * @s: pointer to string
 *
 * Return: 0;
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
