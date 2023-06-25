/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 02:15:29 by dclark            #+#    #+#             */
/*   Updated: 2021/05/21 11:29:33 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*chr;

	chr = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*chr == (unsigned char)c)
			return (chr);
		chr++;
	}
	return (NULL);
}
