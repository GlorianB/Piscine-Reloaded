/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbikoumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 04:22:33 by gbikoumo          #+#    #+#             */
/*   Updated: 2019/04/03 04:29:21 by gbikoumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int index;
	int res;

	index = 0;
	res = 0;
	while (tab[index])
	{
		if (f(tab[index]) == 1)
			res += 1;
		index++;
	}
	return (res);
}
