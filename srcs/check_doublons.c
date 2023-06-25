/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_doublons.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 16:19:36 by dclark            #+#    #+#             */
/*   Updated: 2021/07/07 16:26:21 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_s.h"

int	check_doublons(t_pile a)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (a.size == 1)
		return (0);
	while (j < a.sz_max - 1)
	{
		while (i < a.sz_max)
		{
			if (a.pile[i] == a.pile[j])
				return (-1);
			i++;
		}
		j++;
		i = j + 1;
	}
	return (0);
}
