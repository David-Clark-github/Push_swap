/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:17:33 by dclark            #+#    #+#             */
/*   Updated: 2021/07/06 16:39:06 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_s.h"

int	ft_max_top(t_p_s *data)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (i <= data->pile_b.size - 1)
	{
		if (data->pile_b.pile[res] < data->pile_b.pile[i])
			res = i;
		i++;
	}
	return (res);
}

void	p1(t_p_s *data)
{
	while (data->pile_a.size > 3)
	{
		data->flag = 0;
		while (data->flag == 0)
		{
			data->top_bot = ft_top_bot(data, data->min, data->max);
			data->bot_top = ft_bot_top(data, data->min, data->max);
			if (data->top_bot == -1 || data->bot_top == -1)
				data->flag = 1;
			if (data->top_bot >= data->bot_top && data->flag == 0)
			{
				while (data->bot_top-- > 0)
					rra(&data->pile_a);
				pb(&data->pile_a, &data->pile_b);
			}
			else if (data->bot_top >= data->top_bot && data->flag == 0)
			{
				while (data->top_bot-- > 0)
					ra(&data->pile_a);
				pb(&data->pile_a, &data->pile_b);
			}
		}
		data->min += data->size_chunk;
		data->max += data->size_chunk;
	}
}

void	p2(t_p_s *data)
{
	while (data->pile_b.size != 0)
	{
		data->max_top = ft_max_top(data);
		if (data->max_top >= data->pile_b.size / 2)
		{
			data->max_top = data->pile_b.size - data->max_top;
			while (data->max_top--)
				rrb(&data->pile_b);
			pa(&data->pile_a, &data->pile_b);
		}
		else
		{
			while (data->max_top--)
				rb(&data->pile_b);
			pa(&data->pile_a, &data->pile_b);
		}
	}
}

int	get_min(t_p_s *data)
{
	int	i;
	int	res;

	i = 0;
	res = data->pile_a.pile[0];
	while (i < data->pile_a.size)
	{
		if (res > data->pile_a.pile[i])
			res = data->pile_a.pile[i];
		i++;
	}
	return (res);
}

void	chunk_2(t_p_s *data, int target)
{
	int	i;

	i = 0;
	data->size_chunk = data->pile_a.size;
	while (data->size_chunk > target)
		data->size_chunk = data->pile_a.size / ++i;
	data->min = get_min(data);
	data->max = data->size_chunk + data->min;
	p1(data);
	three_val(data);
	p2(data);
}
