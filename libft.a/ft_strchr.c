/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshresth <mshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:53:59 by mshresth          #+#    #+#             */
/*   Updated: 2025/07/22 23:59:28 by mshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
		{
			return (str);
		}
		str++;
	}
	if (c == '\0')
	{
		return (str);
	}
	return (0);
}

// #include<stdio.h>
// int main (void)
// {
//     char str[] = "testing 1 2 3";
//     printf("%s",ft_strchr(str,'e'));
//     return (0);
// }