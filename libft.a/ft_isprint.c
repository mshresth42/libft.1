/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshresth <mshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:53:00 by mshresth          #+#    #+#             */
/*   Updated: 2025/08/03 20:57:36 by mshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

// #include<stdio.h>
// int main(void)
// {
//     printf("%d\n", ft_isprint('d'));
//     printf("%d\n", ft_isprint('2'));
//     printf("%d\n", ft_isprint('@'));
//     printf("%d\n", ft_isprint(' '));
//     printf("%d\n", ft_isprint('\n'));
//     printf("%d\n", ft_isprint(31));
//     return(0);
// }
