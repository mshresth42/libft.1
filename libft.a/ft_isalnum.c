/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshresth <mshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:52:22 by mshresth          #+#    #+#             */
/*   Updated: 2025/07/22 23:58:33 by mshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

// #include<stdio.h>
// int main (void)
// {
//     printf("%d\n",ft_isalnum('a'));
//     printf("%d\n",ft_isalnum('G'));
//     printf("%d\n",ft_isalnum('4'));
//     printf("%d\n",ft_isalnum('+'));
//     return (0);
// }