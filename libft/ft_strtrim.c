/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmashigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 14:44:41 by tmashigo          #+#    #+#             */
/*   Updated: 2018/06/15 07:26:09 by tmashigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	size_t	start;
	size_t	len;
	char	*str;

	start = 0;
	if (!s)
		return (NULL);
	while (s[start] != '\0' && (s[start] == ' ' ||
				s[start] == '\t' || s[start] == '\n'))
		start++;
	if (s[start] == '\0')
	{
		str = ft_memalloc(2);
		return (str);
	}
	len = ft_strlen((char*)s);
	while (s[len - 1] == ' ' || s[len - 1] == '\t' ||
			s[len - 1] == '\n')
		len--;
	str = ft_strsub(s, start, len - start);
	if (str)
		return (str);
	return (NULL);
}
