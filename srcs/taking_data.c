/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   taking_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:03:17 by dclark            #+#    #+#             */
/*   Updated: 2021/07/07 16:04:48 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_s.h"

static void	malloc_pile(t_p_s *data)
{
	int	i;

	i = -1;
	data->pile_a.size = data->pile_a.sz_max;
	data->pile_a.pile = (int *)malloc(sizeof(int) * (data->pile_a.size));
	if (data->pile_a.pile == NULL)
		ft_error(data);
	data->pile_b.sz_max = data->pile_a.sz_max;
	data->pile_b.size = 0;
	data->pile_b.pile = (int *)malloc(sizeof(int) * (data->pile_b.size));
	if (data->pile_b.pile == NULL)
		ft_error(data);
	while (++i < data->pile_b.sz_max)
		data->pile_b.pile[i] = 0;
}

static void	taking_val(t_pile *a, int *i_pile, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] <= ' ' && str[i] != '\0')
			i++;
		if (str[i] == '-')
		{
			a->pile[*i_pile] = ft_atoi(&str[i]);
			i++;
			*i_pile = *i_pile + 1;
			while (ft_isdigit(str[i]))
				i++;
		}
		else if (ft_isdigit(str[i]))
		{
			a->pile[*i_pile] = ft_atoi(&str[i]);
			*i_pile = *i_pile + 1;
			while (ft_isdigit(str[i]))
				i++;
		}
	}
}

static void	fill_pile_a(t_p_s *data, int ac, char **av)
{
	int	i_ac;
	int	i_pile;

	i_ac = 1;
	i_pile = 0;
	while (i_ac < ac)
	{
		taking_val(&data->pile_a, &i_pile, av[i_ac]);
		i_ac++;
	}
}

void	taking_data(t_p_s *data, int ac, char **av)
{
	malloc_pile(data);
	fill_pile_a(data, ac, av);
}	
