/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshresth <mshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:22:26 by mshresth          #+#    #+#             */
/*   Updated: 2025/07/24 04:17:15 by mshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*ss;
	size_t	i;

	if (!s)
		return (NULL);
	size = strlen(s);
	if (start >= size)
	{
		ss = malloc(1);
		if (!ss)
			return (NULL);
		ss[0] = '\0';
		return (ss);
	}
	if (len > size - start)
		len = size - start;
	ss = malloc(len + 1);
	if (!ss)
		return (NULL);
	i = 0;
	while (i < len)
		ss[i++] = s[start++];
	ss[i] = '\0';
	return (ss);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%s\n", ft_substr("Hello World", 6, 5));
// 	printf("%s\n", ft_substr("Hello World", 0, 3));
// 	printf("%s\n", ft_substr("Hello World", 10, 5));
// 	return (0);
// }