/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:42:09 by dclark            #+#    #+#             */
/*   Updated: 2021/06/21 14:28:09 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_s.h"

void	rr(t_pile *a, t_pile *b)
{
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
}
