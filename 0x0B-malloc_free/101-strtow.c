#include "main.h"

/**
 * *_strncpy - copies at most n bytes from src to dest
 * @dest: the buffer storing the string copy
 * @src: source string
 * @n: max number of bytes to copy from src
 *
 * Return: a pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}

/**
 * word_count - counts the number of words in string
 * @str: the string
 *
 * Return: the number of words
 */

int word_count(char *str)
{
	int flag = 0;
	int wc = 0;
	int i = 0;

	while (str[i])
	{
		if (str[i] == ' ')
			flag = 0;

		else if (flag == 0)
		{
			flag = 1;
			wc++;
		}

		i++;
	}

	return (wc);
}

/**
 * strtow - splits string into words
 * @str: the string
 *
 * Return: a pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, j = 0, k;
	int words, len;
	char **new = NULL, *start = NULL;

	if (str == NULL || !(*str))
		return (NULL);

	words = word_count(str);
	if (words == 0)
		return (NULL);
	new = malloc(sizeof(char *) * (words + 1));
	if (!new)
		return (NULL);

	for (i = 0; i < words; i++)
	{
		len = 0;
		while (str[j])
		{
			if (str[j] == ' ')
				j++;
			else
				break;
		}
		start = &(str[j]);
		while (str[j] != ' ' && str[j])
		{
			len++;
			j++;
		}
		new[i] = malloc(sizeof(char) * (len + 1));
		if (!new[i])
			return (NULL);
		_strncpy(new[i], start, len);
		new[i][len] = '\0';
	}
	new[words] = NULL;

	return (new);
}
