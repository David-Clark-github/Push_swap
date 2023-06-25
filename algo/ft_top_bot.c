/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_top_bot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 16:08:33 by dclark            #+#    #+#             */
/*   Updated: 2021/07/06 16:10:11 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_s.h"

int	ft_top_bot(t_p_s *data, int min, int max)
{
	int	i;

	i = 0;
	while (i <= data->pile_a.size - 1)
	{
		if (data->pile_a.pile[i] >= min && data->pile_a.pile[i] <= max)
			return (i);
		i++;
	}
	return (-1);
}
