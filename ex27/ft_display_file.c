/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbikoumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 04:30:10 by gbikoumo          #+#    #+#             */
/*   Updated: 2019/04/03 23:44:13 by gbikoumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#define BUFF_SIZE 1

void	ft_putchar(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_putstr(int fd, char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		ft_putchar(fd, str[index]);
		index++;
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	int		tmp;
	char	str[BUFF_SIZE + 1];

	if (argc == 1)
		ft_putstr(2, "File name missing.\n");
	else if (argc > 2)
		ft_putstr(2, "Too many arguments.\n");
	else
	{
		fd = open(argv[1], O_RDONLY);
		while ((tmp = read(fd, str, BUFF_SIZE)))
		{
			str[BUFF_SIZE] = '\0';
			write(1, str, tmp);
		}
		close(fd);
	}
	return (0);
}
