#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * count_words - Helper function to count the number of words in a string.
 * @str: The string to evaluate.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int in_word = 0;
	int word_count = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			word_count++;
		}
		str++;
	}
	
	return (word_count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: Pointer to an array of strings (success) or NULL (error).
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, j;
	
	while (str[len] != '\0')
		len++;
	
	words = count_words(str);
	if (words == 0)
		return (NULL);
	
	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return( NULL);
	
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				tmp = (char *)malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				start = i - c;
				for (j = 0; j < c; j++)
					tmp[j] = str[start + j];
				tmp[c] = '\0';
				matrix[k] = tmp;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
		{
			start = i;
		}
	}

	matrix[k] = NULL;
	return (matrix);
}
