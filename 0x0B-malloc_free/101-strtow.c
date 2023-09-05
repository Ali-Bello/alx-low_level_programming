#include <stdlib.h>
#include "main.h"

/**
  * _strxcpy - copy upto max elements from src to dest.
  * @dest: destination string.
  * @src: source string.
  * @max: the max number of elements.
  * Return: none.
  */

void	_strxcpy(char *dest, char *src, int max)
{
	int	i;

	i = 0;
	while (i < max)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
}

/**
 * _wd_count - count the number of words in a string.
 * @str: string to evaluate.
 * Return: number of words
 */

int	_wd_count(char *str)
{
	int	i, count, flag;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		flag = i;
		while (str[i] != ' ' && str[i])
			i++;
		if (i > flag)
			count++;
	}
	return (count);
}

/**
  * _array_fill - fill 2D array with the right strings.
  * @arr: the 2D array.
  * @str: the src of the strings.
  * Return: none.
  */

void	_array_fill(char **arr, char *str)
{
	int	i, j, flag;

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
			arr[j] = malloc(sizeof(char) * (i - flag));
			_strxcpy(arr[j++], str + flag, i - flag);
		}
	}
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char	**array;
	int	size;

	if (str == NULL || *str == 0)
		return (NULL);
	size = _wd_count(str);
	array = malloc(sizeof(char *) * (size + 1));
	if (array == NULL)
		return (NULL);
	array[size] = NULL;
	_array_fill(array, str);
	return (array);
}
