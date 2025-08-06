/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshresth <mshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:55:06 by mshresth          #+#    #+#             */
/*   Updated: 2025/08/04 01:57:06 by mshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*last;

	c = (unsigned char)c;
	i = 0;
	last = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] == c)
		{
			last = (char *)&str[i];
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)&str[i]);
	}
	return (last);
}

// #include<stdio.h>
// int main (void)
// {
//     char str[] = "happy apply apple";
//     printf("%s", ft_strrchr(str, 'p'));
//     return (0);
// }