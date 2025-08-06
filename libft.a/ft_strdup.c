/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshresth <mshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:54:26 by mshresth          #+#    #+#             */
/*   Updated: 2025/08/04 00:16:53 by mshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		i;
	char	*copy;

	i = 0;
	while (s[i])
	{
		i++;
	}
	copy = malloc(i + 1);
	if (!copy)
	{
		return (NULL);
	}
	i = 0;
	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

// #include<stdio.h>
// int main(void)
// {
// 	char	*original;
// 	char 	*copy;

// 	original = "Lets Copy this string!!";
// 	copy = ft_strdup(original);

// 	printf("Original: %s\n", original);
// 	printf("Copy:%s\n", copy);
// 	free(copy);
// 	return (0);
// }