/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshresth <mshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:52:07 by mshresth          #+#    #+#             */
/*   Updated: 2025/07/23 21:27:40 by mshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, int n)
{
	int				i;
	unsigned char	*ptr;

	i = 0;
	ptr = s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

// #include<stdio.h>
// int main(void)
// {
//     char str[] = "hello";
//     printf("Before: %s\n", str);
//     ft_bzero(str, 3);
//     printf("After: %s\n", str);
//     return (0);
// }