/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmashigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 14:59:58 by tmashigo          #+#    #+#             */
/*   Updated: 2018/06/15 07:31:54 by tmashigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	int	i;
	int	j;

	i = 0;
	if (s != NULL && *f != NULL)
	{
		j = ft_strlen(s);
		while (i < j)
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
}
