/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshresth <mshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 05:59:52 by mshresth          #+#    #+#             */
/*   Updated: 2025/08/06 19:33:29 by mshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_words(const char *s, char delimiter)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != delimiter && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == delimiter)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*word_dup(const char *start, size_t len)
{
	char	*word;
	size_t	i;

	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_all(char **array, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static int	extract_word(char **result, const char **s, char delimiter, int i)
{
	const char	*start;
	size_t		len;

	start = *s;
	len = 0;
	while (**s && **s != delimiter)
	{
		(*s)++;
		len++;
	}
	result[i] = word_dup(start, len);
	return (result[i] != NULL);
}

char	**ft_split(char const *s, char c)
{
	char		**result;
	int			words;
	int			i;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	result = (char **)malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!extract_word(result, &s, c, i++))
			{
				free_all(result, i - 1);
				return (NULL);
			}
		}
		else
			s++;
	}
	return (result[i] = NULL, result);
}

// #include<stdio.h>
// int main()
// {
// 	char **words = ft_split("hello,world,test", ',');
// 	int i = 0;

// 	printf("Split result:\n");
// 	while (words[i])
// 	{
// 		printf("[%d]: %s\n", i, words[i]);
// 		free(words[i]);
// 		i++;
// 	}
// 	free(words);

// 	return 0;
// }
