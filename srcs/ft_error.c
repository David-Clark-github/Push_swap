/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 14:25:26 by dclark            #+#    #+#             */
/*   Updated: 2021/05/14 15:29:55 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_s.h"

void	ft_error(t_p_s *data)
{
	if (data->pile_a.pile != NULL)
		free(data->pile_a.pile);
	if (data->pile_b.pile != NULL)
		free(data->pile_b.pile);
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}
