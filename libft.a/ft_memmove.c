/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshresth <mshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:53:33 by mshresth          #+#    #+#             */
/*   Updated: 2025/08/01 20:18:21 by mshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, int n)
{
	int					i;
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (!d && !s)
		return (NULL);
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (--i >= 0)
			d[i] = s[i];
	}
	return (dest);
}

// #include<stdio.h>
// int main (void)
// {
//     char src[] = "helo";
//     char dest[20];
//     ft_memmove(dest, src, 5);  
//     printf("%s\n", dest); 

//     ft_memmove(src, src, 6); 
//     printf("Overlapping copy (dest > src): %s\n", src);

//     char str3[20] = "memmove example";
//     ft_memmove(str3, str3, 13);
//     printf("Overlapping copy (dest < src): %s\n", str3);

//     return 0;
// }