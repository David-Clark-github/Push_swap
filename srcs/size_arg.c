/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_arg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 13:56:18 by dclark            #+#    #+#             */
/*   Updated: 2021/07/07 14:12:06 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_s.h"

static void	count(char *str, int *res)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] <= ' ' && str[i] != '\0')
			i++;
		if (str[i] == '-')
			i++;
		if (ft_isdigit(str[i]))
		{
			*res = *res + 1;
			while (ft_isdigit(str[i]))
				i++;
		}
	}
}

int	size_arg(int ac, char **av)
{
	int	i_ac;
	int	res;

	i_ac = 1;
	res = 0;
	while (i_ac < ac)
	{
		count(av[i_ac], &res);
		i_ac++;
	}
	return (res);
}
