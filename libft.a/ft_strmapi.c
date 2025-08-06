/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshresth <mshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 06:17:24 by mshresth          #+#    #+#             */
/*   Updated: 2025/08/04 01:21:20 by mshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	int				len;
	int				i;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// char	to_upper(unsigned int i, char c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	return (c);
// }

// #include <stdio.h>
// int main(void)
// {
// 	char str[] = "Hello there my Friend!";
// 	printf("Old: %s\n", str);
// 	char *result = ft_strmapi(str, to_upper);
// 	printf("New: %s\n", result);
// 	free(result);
// 	return 0;
// }