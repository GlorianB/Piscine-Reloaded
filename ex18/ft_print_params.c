/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbikoumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 17:51:53 by gbikoumo          #+#    #+#             */
/*   Updated: 2019/04/02 18:03:31 by gbikoumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index])
		ft_putchar(str[index++]);
}

int		main(int argc, char **argv)
{
	int index;

	index = 1;
	while (index < argc)
	{
		ft_putstr(argv[index++]);
		ft_putchar('\n');
	}
	return (0);
}
