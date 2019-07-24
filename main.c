/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kseperep <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 09:45:06 by kseperep          #+#    #+#             */
/*   Updated: 2019/07/03 12:07:10 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int argc, char **argv)
{
	char	*line;
	int		fd;

	fd = open(argv[1], O_RDONLY);
	line = NULL;
    if (!argc)
        return (0);
	while ((get_next_line(fd, &line)) > 0)
	{
		ft_putendl(line);
		free(line);
		line = NULL;
	}
	//sleep(30);
	return (0);
}
