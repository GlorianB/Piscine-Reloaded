/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbikoumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:09:52 by gbikoumo          #+#    #+#             */
/*   Updated: 2019/04/02 18:49:29 by gbikoumo         ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	return (s1[0] != s2[0] ? (unsigned char)s1[0] - (unsigned char)s2[0]
			: ft_strcmp(s1 + 1, s2 + 1));
}

char	**ft_sort_params(char **argv)
{
	int		index;
	char	*tmp;

	index = 1;
	while (argv[index])
	{
		if (ft_strcmp(argv[index - 1], argv[index]) > 0)
		{
			tmp = argv[index - 1];
			argv[index - 1] = argv[index];
			argv[index] = tmp;
			index = 0;
		}
		index++;
	}
	return (argv);
}

int		main(int argc, char **argv)
{
	int		index;
	char	**res;

	if (argc == 1)
		return (0);
	index = 1;
	res = ft_sort_params(argv);
	while (res[index])
	{
		ft_putstr(res[index++]);
		ft_putchar('\n');
	}
	return (0);
}
