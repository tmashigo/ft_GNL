/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmashigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 12:10:53 by tmashigo          #+#    #+#             */
/*   Updated: 2018/06/30 13:38:15 by tmashigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int     main()
{
    int     fd;
    char    *line;
    int i;

    fd = open("bible.txt", O_RDONLY);
    i = get_next_line(fd, &line);

    while (i > 0)
    {
        printf("line = %s\n", line);
        i = get_next_line(fd, &line);
    }
    return (0);
}
