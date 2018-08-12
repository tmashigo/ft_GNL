/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmashigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 10:51:37 by tmashigo          #+#    #+#             */
/*   Updated: 2018/06/30 12:45:10 by tmashigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_read(int fd, char **line, char **info)
{
	int		i;
	char	*tmp;

	i = 0;
	while (info[fd][i] != '\n' && info[fd][i] != '\0')
		i++;
	if (info[fd][i] == '\n')
	{
		*line = ft_strsub(info[fd], 0, i);
		tmp = ft_strdup(&info[fd][i + 1]);
		free(info[fd]);
		info[fd] = tmp;
		if (info[fd][0] == '\0')
			ft_strdel(&info[fd]);
	}
	else if (info[fd][i] == '\0')
	{
		*line = ft_strdup(info[fd]);
		ft_strdel(&info[fd]);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char	*info[255];
	char		buff[BUFF_SIZE + 1];
	int			r_bytes;
	char		*tmp;

	if (fd < 0 || !line)
		return (-1);
	while ((r_bytes = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[r_bytes] = '\0';
		if (info[fd] == NULL)
			info[fd] = ft_strnew(0);
		tmp = ft_strjoin(info[fd], buff);
		free(info[fd]);
		info[fd] = tmp;
		if (ft_strchr(buff, '\n'))
			break ;
	}
	if (r_bytes < 0)
		return (-1);
	else if (r_bytes == 0 && (info[fd] == NULL || info[fd][0] == '\0'))
		return (0);
	return (ft_read(fd, line, info));
}
