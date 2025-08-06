/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshresth <mshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 02:48:19 by mshresth          #+#    #+#             */
/*   Updated: 2025/08/04 04:32:18 by mshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	check(const char c, const char *set)
{
	int	i;

	if (!set)
		return (0);
	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;
	size_t	len;
	size_t	i;
	char	*result;

	if (!s1)
		return (NULL);
	if (s1[0] == '\0')
		return (ft_strdup(""));
	first = 0;
	while (s1[first] && check(s1[first], set))
		first++;
	last = ft_strlen(s1) - 1;
	while (last > first && check(s1[last], set))
		last--;
	len = last - first + 1;
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
		result[i++] = s1[first++];
	result[len] = '\0';
	return (result);
}

// #include<stdio.h>
// int main(void)
// {
// 	char *test1;
// 	test1 = ft_strtrim("321hello world123", "123");
// 	printf("'%s'\n", test1);
// 	free(test1);

// 	char *test2;
// 	test2 = ft_strtrim(".....hello world....", ".");
// 	printf("'%s'\n", test2);
// 	free(test2);

// 	char *test3;
// 	test3 = ft_strtrim("    hello world  ", " ");
// 	printf("'%s'\n", test3);
// 	free(test3);

// 	char *test4;
// 	test4 = ft_strtrim("hello\n world\n", "\n");
// 	printf("'%s'\n", test4);
// 	free(test4);
// 	return (0);
// }
