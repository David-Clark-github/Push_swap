/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argument.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 18:37:15 by dclark            #+#    #+#             */
/*   Updated: 2021/07/19 16:22:38 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_s.h"

static int	num_neg(char *str, int *i, int *num_nb)
{
	if (str[*i] == '-')
	{
		if (ft_isdigit(str[*i + 1]))
			if (ft_atoil(&str[*i]) > INT_MAX)
				return (ERROR);
		*i = *i + 1;
		if (!ft_isdigit(str[*i]))
			return (ERROR);
		*num_nb = *num_nb + 1;
		while (ft_isdigit(str[*i]))
			*i = *i + 1;
	}
	else if (ft_isdigit(str[*i]))
	{
		*num_nb = *num_nb + 1;
		if (ft_atoil(&str[*i]) > INT_MAX)
			return (ERROR);
		while (ft_isdigit(str[*i]))
			*i = *i + 1;
	}
	else
		return (ERROR);
	return (1);
}

static int	ft_format(char *str)
{
	int	i;
	int	num_nb;

	i = 0;
	num_nb = 0;
	while (str[i])
	{
		while (str[i] <= ' ' && str[i] != '\0')
			i++;
		if (str[i] == '\0' && num_nb != 0)
			return (OK);
		if (str[i] == '\0' && num_nb == 0)
			return (ERROR);
		if (num_neg(str, &i, &num_nb) != 1)
			return (ERROR);
	}
	return (OK);
}

int	check_argument(int ac, char **av)
{
	int	i_av;

	i_av = 1;
	while (i_av < ac)
	{
		if (ft_strlen(av[i_av]) == 0)
			return (ERROR);
		else if (ft_format(av[i_av]) == OK)
			i_av++;
		else
			return (ERROR);
	}
	return (OK);
}
