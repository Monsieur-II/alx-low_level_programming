#include "main.h"

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
		while (str[j] != ' ')
		{
			len++;
			j++;
		}
		new[i] = malloc(sizeof(char) * (len + 1));
		if (!new[i])
			return (NULL);
		for (k = 0; k < len; k++)
			new[i][k] = start[k];
		new[i][k] = '\0';
	}
	new[words] = NULL;

	return (new);
}
