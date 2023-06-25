/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 15:02:50 by dclark            #+#    #+#             */
/*   Updated: 2021/07/19 16:11:15 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_s.h"

static void	free_data(t_p_s *data)
{
	if (data->pile_a.pile != NULL)
		free(data->pile_a.pile);
	if (data->pile_b.pile != NULL)
		free(data->pile_b.pile);
}

static int	ft_small(t_p_s *data)
{
	if (sort(data))
		return (0);
	if (data->pile_a.sz_max <= 4)
		three_val(data);
	if (half_sort(data))
	{
		while (sort(data) == 0)
			ra(&data->pile_a);
		return (0);
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_p_s	data;

	data.pile_a.pile = NULL;
	data.pile_b.pile = NULL;
	if (ac == 1)
		return (0);
	if (check_argument(ac, av) == ERROR)
		ft_error(&data);
	data.pile_a.sz_max = size_arg(ac, av);
	taking_data(&data, ac, av);
	if (check_doublons(data.pile_a) == -1)
		ft_error(&data);
	if (ft_small(&data) == 0)
		return (0);
	else if (data.pile_a.size <= 9)
		small_val(&data);
	else if (data.pile_a.sz_max >= 10 && data.pile_a.sz_max <= 101)
		chunk_2(&data, 15);
	else if (data.pile_a.sz_max >= 102 && data.pile_a.sz_max <= 251)
		chunk_2(&data, 25);
	else if (data.pile_a.sz_max > 251)
		chunk_2(&data, 45);
	free_data(&data);
}
