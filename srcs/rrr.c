/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:56:31 by dclark            #+#    #+#             */
/*   Updated: 2021/06/21 14:27:42 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_s.h"

void	rrr(t_pile *a, t_pile *b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}
