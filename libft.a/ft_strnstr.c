/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshresth <mshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:54:58 by mshresth          #+#    #+#             */
/*   Updated: 2025/08/04 01:32:38 by mshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!needle[0])
	{
		return ((char *)haystack);
	}
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (!needle[j + 1])
			{
				return ((char *)&(haystack[i]));
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

// #include<stdio.h>
// int main (void)
// {
//     char *h = "the sunshine";
//     char *n = " ";
//     printf("%s",ft_strnstr(h, n, 3));
//     return (0);
// }