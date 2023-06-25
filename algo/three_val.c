/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_val.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 14:48:01 by dclark            #+#    #+#             */
/*   Updated: 2021/06/21 16:36:11 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_s.h"

static void	three_three(t_pile *a)
{
	if ((a->pile[0] > a->pile[1] && a->pile[1] < a->pile[2]) \
			&& a->pile[2] > a->pile[0])
		sa(a);
	if ((a->pile[0] < a->pile[1] && a->pile[1] > a->pile[2]) \
			&& a->pile[2] > a->pile[0])
	{
		sa(a);
		ra(a);
	}
	if ((a->pile[0] < a->pile[1] && a->pile[1] > a->pile[2]) \
			&& a->pile[2] < a->pile[0])
		rra(a);
	if ((a->pile[0] > a->pile[1] && a->pile[1] < a->pile[2]) \
			&& a->pile[2] < a->pile[0])
		ra(a);
	if ((a->pile[0] > a->pile[1] && a->pile[1] > a->pile[2]) \
			&& a->pile[2] < a->pile[0])
	{
		sa(a);
		rra(a);
	}
}

void	three_val(t_p_s *data)
{
	if (data->pile_a.size == 1 || data->pile_a.size == 0)
		return ;
	if (data->pile_a.size == 2)
	{
		if (data->pile_a.pile[0] > data->pile_a.pile[1])
			sa(&data->pile_a);
		return ;
	}
	if (data->pile_a.size == 3)
		three_three(&data->pile_a);
}
