/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshresth <mshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 12:27:02 by mshresth          #+#    #+#             */
/*   Updated: 2025/08/03 22:07:43 by mshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write(fd, &c, 1);
	else
		return ;
}

// int main(void)
// {
// 	ft_putchar_fd('M', 1);
// 	ft_putchar_fd('B', 2);
// 	ft_putchar_fd('\n', 1);
// 	return (0);
// }