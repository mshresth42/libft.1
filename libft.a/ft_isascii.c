/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshresth <mshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:52:47 by mshresth          #+#    #+#             */
/*   Updated: 2025/07/22 23:58:42 by mshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
	{
		return (1);
	}
	return (0);
}
// #include<stdio.h>
// int main(void)
// {
//     printf("%d\n", ft_isascii('d'));
//     printf("%d\n", ft_isascii('2'));
//     printf("%d\n", ft_isascii('@'));
//     printf("%d\n", ft_isascii(456));
//     printf("%d\n", ft_isascii(-54));
//     return(0);
// }