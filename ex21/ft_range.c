/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbikoumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:11:58 by gbikoumo          #+#    #+#             */
/*   Updated: 2019/04/02 22:45:50 by gbikoumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int taille;
	int index;
	int *res;

	index = 0;
	taille = max - min;
	if (taille <= 0)
		return (NULL);
	if ((res = (int *)malloc(sizeof(int) * taille)) == NULL)
		return (0);
	index = 0;
	while (index + min < max)
	{
		res[index] = index + min;
		index++;
	}
	return (res);
}
