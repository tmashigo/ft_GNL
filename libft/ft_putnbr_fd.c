/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmashigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 08:40:56 by tmashigo          #+#    #+#             */
/*   Updated: 2018/06/07 14:50:11 by tmashigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < -9 || n > 9)
		ft_putnbr_fd(n / 10, fd);
	if (n < 0)
	{
		if (n >= -9 && n <= -1)
			ft_putchar_fd('-', fd);
		ft_putchar_fd('0' - (n % 10), fd);
	}
	else
		ft_putchar_fd('0' + (n % 10), fd);
}
