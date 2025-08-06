/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshresth <mshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:52:39 by mshresth          #+#    #+#             */
/*   Updated: 2025/08/03 20:55:05 by mshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

// #include<stdio.h>
// int main(void)
// {
//     printf("%d", ft_isalpha('A'));
//     printf("%d", ft_isalpha('i'));
//     printf("%d", ft_isalpha('2'));
//     printf("%d", ft_isalpha('.'));
//     printf("%d", ft_isalpha('@'));
//     return(0);
// }