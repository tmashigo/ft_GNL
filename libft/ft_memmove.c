/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmashigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 16:46:12 by tmashigo          #+#    #+#             */
/*   Updated: 2018/06/05 16:48:50 by tmashigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	if (s < d)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		while (i < len)
		{
			if (s[i] != d[i])
				d[i] = s[i];
			i++;
		}
	}
	return (d);
}
