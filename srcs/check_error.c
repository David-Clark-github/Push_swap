/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:43:36 by dclark            #+#    #+#             */
/*   Updated: 2021/07/06 17:34:38 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_s.h"

static void	check_digit(int ac, char **av, t_p_s *data)
{
	int	i;
	int	j;

	i = 0;
	while (++i < ac)
	{
		j = -1;
		if (ft_strlen(av[i]) == 1 && av[i][0] == '-')
			ft_error(data);
		while (av[i][++j])
		{
			if (j == 0 && av[i][j] == '-')
				;
			else if (ft_isdigit(av[i][j]) == 0)
				ft_error(data);
		}
	}
}

static void	check_int_limit(int ac, char **av, t_p_s *data)
{
	int	i;

	i = 0;
	while (++i < ac)
	{
		if (ft_atoil(av[i]) < INT_MIN)
			ft_error(data);
		if (ft_atoil(av[i]) > INT_MAX)
			ft_error(data);
	}
}

static void	check_double(int ac, char **av, t_p_s *data)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	while (b < ac)
	{
		while (a < b)
		{
			if (ft_atoi(av[a]) == ft_atoi(av[b]))
				ft_error(data);
			a++;
		}
		a = 1;
		b++;
	}
}

void	check_error(int ac, char **av, t_p_s *data)
{
	data->pile_a.pile = NULL;
	data->pile_b.pile = NULL;
	if (ac < 2)
		return ;
	check_digit(ac, av, data);
	check_int_limit(ac, av, data);
	if (ac > 2)
		check_double(ac, av, data);
}
