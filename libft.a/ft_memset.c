/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshresth <mshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:53:40 by mshresth          #+#    #+#             */
/*   Updated: 2025/07/23 21:29:19 by mshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, int num)
{
	unsigned char	*p;
	int				i;

	i = 0;
	p = ptr;
	while (i < num)
	{
		p[i] = value;
		i++;
	}
	return (ptr);
}

// #include<stdio.h>
// int main(void)
// {
//     char str[] = "hello";
//     printf("Before: %s\n", str);
//     ft_memset(str,'x', 5);
//     printf("After: %s\n", str);
//     return (0);
// }