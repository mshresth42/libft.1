/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshresth <mshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:53:09 by mshresth          #+#    #+#             */
/*   Updated: 2025/08/03 21:02:24 by mshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	size_t		i;
	const char	*p;

	p = ptr;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)p[i] == (unsigned char)c)
		{
			return ((void *)&p[i]);
		}
		i++;
	}
	return (NULL);
}

// #include<stdio.h>
// int main (void)
// {
//     char ptr[] = { 'a', 's', 'f', '\0', 'j', 'e' };
//     char *result = ft_memchr(ptr,'d',8);
//     if (result)
//         printf("%c\n", *result);
//     else
//     printf("Not Found\n");
//     return (0);
// }