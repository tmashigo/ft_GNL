/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmashigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 18:20:51 by tmashigo          #+#    #+#             */
/*   Updated: 2018/06/15 10:19:54 by tmashigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		--i;
	}
	return (NULL);
}
#include <stdio.h>

int		main()
{
	printf("%s\n", ft_strrchr("somethinginside", 't'));
	ft_putendl(ft_strrchr("somethinginside", 't'));
	return(0);
}
