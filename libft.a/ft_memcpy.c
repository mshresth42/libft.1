/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshresth <mshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:53:24 by mshresth          #+#    #+#             */
/*   Updated: 2025/07/23 21:29:03 by mshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, int n)
{
	int					i;
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (!dest && !src)
	{
		return (0);
	}
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// #include<stdio.h>
// int main(void)
// {
//     char src[] = "Hello my sunshine!";
//     char dest[10];
//     ft_memcpy(dest, src, 9);
//     printf("%s\n", dest);  
//     return 0;
// }