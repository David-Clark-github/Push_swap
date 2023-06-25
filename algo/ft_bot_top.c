/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bot_top.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 16:29:48 by dclark            #+#    #+#             */
/*   Updated: 2021/07/06 16:32:13 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_s.h"

int	ft_bot_top(t_p_s *data, int min, int max)
{
	int	res;
	int	i;

	i = data->pile_a.size - 1;
	res = 0;
	while (i >= 0)
	{
		if (data->pile_a.pile[i] >= min && data->pile_a.pile[i] <= max)
			return (res + 1);
		res++;
		i--;
	}
	return (-1);
}
