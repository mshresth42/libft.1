/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshresth <mshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 03:58:09 by mshresth          #+#    #+#             */
/*   Updated: 2025/08/04 00:41:26 by mshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void	to_upper(unsigned int i, char *c)
// {
// 	(void)i;
// 	if (*c >= 'a' && *c <= 'z')
// 		*c = *c - 32;
// }
// #include <stdio.h>
// int main(void)
// {
// 	char str[] = "Hello there my Friend!";
// 	printf("Before: %s\n", str);
// 	ft_striteri(str, to_upper);
// 	printf("After:  %s\n", str);
// 	return 0;
// }