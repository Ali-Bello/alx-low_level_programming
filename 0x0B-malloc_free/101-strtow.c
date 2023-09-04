#include "main.h"
#include <stdlib.h>

/**
  * _strcat - catinates src into dest.
  * @dest: destination string.
  * @src: source string.
  * @len: catinates upto len elements.
  */

void	_strcat(char *dest, char *src, int len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < len)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
}

/**
  * _strlen - returns the length of a string.
  * @s: the string.
  * Return: the length.
  */

int	_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
  * _wd_count - counts how many words in a string.
  * @str: the string to get the words from.
  * Return: a 2D array with words size.
  */

char	**_wd_count(char *str)
{
	int	i;
	int	count;
	int	flag;
	char	**ptr;

	i = 0;
	count = 0;
	flag = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			count++;
			flag = 1;
		}
		i++;
	}
	ptr = malloc(sizeof(char *) * (count + 1));
	if (ptr == NULL)
		return (NULL);
	ptr[count] = NULL;
	return (ptr);
}

/**
  * fill_array - fill a 2D array with the correct words.
  * @str: the src of the words.
  * @p: the 2D array.
  */

void	fill_array(char *str, char **p)
{
	int	flag;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		flag = i;
		while (str[i] != ' ' && str[i])
			i++;
		if (i > flag)
		{
			p[j] = malloc(sizeof(char) * (i - flag) + 1);
			_strcat(p[j], str + flag, i - flag);
			j++;
		}
		i++;
	}
}

/**
  * strtow - splits a string into 2D array containing each word.
  * @str: the string.
  * Return: the 2D array.
  */

char	**strtow(char *str)
{
	char	**ptr;

	if (str == NULL || !*str)
		return (NULL);
	ptr = _wd_count(str);
	if (ptr == NULL)
		return (NULL);
	fill_array(str, ptr);
	return (ptr);
}
