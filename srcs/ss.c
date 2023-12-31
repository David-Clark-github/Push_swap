/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:25:33 by dclark            #+#    #+#             */
/*   Updated: 2021/06/21 14:24:57 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_s.h"

void	ss(t_pile *a, t_pile *b)
{
	if (a->size >= 2)
	{
		a->tmp = a->pile[0];
		a->pile[0] = a->pile[1];
		a->pile[1] = a->tmp;
	}
	if (b->size >= 2)
	{
		b->tmp = b->pile[0];
		b->pile[0] = b->pile[1];
		b->pile[1] = b->tmp;
	}
	write(1, "ss\n", 3);
}
