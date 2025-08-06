/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshresth <mshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:53:17 by mshresth          #+#    #+#             */
/*   Updated: 2025/08/03 21:18:34 by mshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	if (num == 0)
		return (0);
	i = 0;
	p1 = ptr1;
	p2 = ptr2;
	while (i < num)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

// #include<stdio.h>
// int main (void)
// {
//     char first[] = {'b', '2','o'};
//     char second[] = {'b', '2','o'};
//     int result = ft_memcmp(first, second,3);
//     if (result < 0)
//         printf("first < second\n");
//     else if (result > 0)
//         printf("first > second\n");
//     else
//         printf("first = second\n");
//     return (0);
// }