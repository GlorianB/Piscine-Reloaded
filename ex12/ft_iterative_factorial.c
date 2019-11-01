/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbikoumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:55:04 by gbikoumo          #+#    #+#             */
/*   Updated: 2019/04/02 17:48:30 by gbikoumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int res;

	if (nb < 0)
		return (0);
	else if (nb < 2)
		return (1);
	else
	{
		i = 2;
		res = 1;
		while (i <= nb)
			res *= i++;
		return (res);
	}
}
