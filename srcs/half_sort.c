/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   half_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 09:58:10 by dclark            #+#    #+#             */
/*   Updated: 2021/07/09 09:58:17 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"p_s.h"

static void	part_1(t_p_s *data, int i)
{
	while (i < data->pile_a.size - 1)
	{
		if (data->pile_a.pile[i] > data->pile_a.pile[i + 1])
		{
			i++;
			break ;
		}
		else if (data->pile_a.pile[i] < data->pile_a.pile[i + 1])
		{
			i++;
		}
	}
}

int	half_sort(t_p_s *data)
{
	int	i;
	int	start_value;

	i = 0;
	start_value = data->pile_a.pile[0];
	if (data->pile_a.size != data->pile_a.sz_max)
		return (0);
	part_1(data, i);
	while (i < data->pile_a.size - 1)
	{
		if (data->pile_a.pile[i] > start_value)
		{
			return (0);
		}
		else if ((data->pile_a.pile[i] > data->pile_a.pile[i + 1]))
		{
			return (0);
		}
		else if ((data->pile_a.pile[i] < data->pile_a.pile[i + 1]))
		{
			i++;
		}
	}
	return (1);
}
