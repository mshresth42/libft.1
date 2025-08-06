/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshresth <mshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 03:30:58 by mshresth          #+#    #+#             */
/*   Updated: 2025/08/04 03:50:17 by mshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	num_len(int n)
{
	int	len;

	len = (n <= 0);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*str;

	nb = n;
	len = num_len(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[len--] = '0' + (nb % 10);
		nb /= 10;
	}
	return (str);
}

// #include <stdio.h>
// int main (void)
// {
// 	int		n = -589;
// 	char	*result = ft_itoa(n);
// 	printf("%s",result);
// 	free(result);
// 	return (0);
// }
