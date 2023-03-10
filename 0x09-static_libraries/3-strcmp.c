#include "main.h"
/**
 * _strcmp - compares pointers to two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: if str1 < str2, the neg. difference of
 * the first unmatched characters
 *	if s1 == s2, 0
 *	if s1 > s2, the pos. difference of
 *	the first unmatched characters
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
