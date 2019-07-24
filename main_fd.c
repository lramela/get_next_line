/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_fd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 11:09:06 by lramela           #+#    #+#             */
/*   Updated: 2019/07/24 11:12:39 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(int argc, char **argv)
{
	char *line;
	int fd;

	fd = open(argv[1], O_RDONLY);
	if (argc < 2)
		return (0);
	while (get_next_line(fd, &line))
	{
		ft_putendl(line);
	}
	return (0);
}
