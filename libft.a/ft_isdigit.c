/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshresth <mshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:52:54 by mshresth          #+#    #+#             */
/*   Updated: 2025/08/03 20:56:36 by mshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
// #include<stdio.h>
// int main(void)
// {
//     printf("%d", ft_isdigit('d'));
//     printf("%d", ft_isdigit('2'));
//     printf("%d", ft_isdigit('@'));
//     return(0);
// }