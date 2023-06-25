/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_pile_end.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 13:35:28 by dclark            #+#    #+#             */
/*   Updated: 2021/06/15 16:03:03 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"p_s.h"

/*
** check_pile vérifie si la pile a est trié par ordre croissant
** elle vérifie d'abord si sa taille corresponds avec sa taille max
** ensuite elle check toutes les valeurs
*/

int	sort(t_p_s *data)
{
	int	i;

	i = 0;
	if (data->pile_a.size != data->pile_a.sz_max)
		return (0);
	while (i < data->pile_a.size - 1)
	{
		if (data->pile_a.pile[i] < data->pile_a.pile[i + 1])
			i++;
		else
			return (0);
	}
	return (1);
}
