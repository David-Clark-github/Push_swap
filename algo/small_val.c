/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_val.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:17:59 by dclark            #+#    #+#             */
/*   Updated: 2021/06/23 16:24:21 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_s.h"

static int	search_value(t_pile *a)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (i < a->size)
	{
		if (a->pile[res] > a->pile[i])
			res = i;
		i++;
	}
	return (res);
}

void	small_val(t_p_s *data)
{
	int	rotate;

	while (data->pile_a.size > 3)
	{
		rotate = search_value(&data->pile_a);
		if (rotate > (data->pile_a.size / 2))
		{
			rotate = data->pile_a.size - rotate;
			while (rotate--)
				rra(&data->pile_a);
		}
		else
			while (rotate--)
				ra(&data->pile_a);
		pb(&data->pile_a, &data->pile_b);
	}
	three_val(data);
	while (data->pile_b.size != 0)
		pa(&data->pile_a, &data->pile_b);
}
