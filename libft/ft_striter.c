/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmashigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 14:56:23 by tmashigo          #+#    #+#             */
/*   Updated: 2018/06/15 07:27:46 by tmashigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int		i;

	i = 0;
	if (s != '\0' && f != '\0')
	{
		while (s[i] != '\0')
		{
			(*f)(&s[i]);
			i++;
		}
	}
}
