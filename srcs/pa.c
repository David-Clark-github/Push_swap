/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:49:22 by dclark            #+#    #+#             */
/*   Updated: 2021/06/21 14:25:21 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_s.h"

void	pa(t_pile *a, t_pile *b)
{
	int	i;

	if (b->size > 0)
	{
		a->size++;
		i = a->size - 1;
		while (i != 0)
		{
			a->pile[i] = a->pile[i - 1];
			i--;
		}
		a->pile[0] = b->pile[0];
		b->size--;
		while (i < b->size)
		{
			b->pile[i] = b->pile[i + 1];
			i++;
		}
	}
	write(1, "pa\n", 3);
}
