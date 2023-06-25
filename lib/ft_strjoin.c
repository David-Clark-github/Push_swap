/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 20:44:29 by dclark            #+#    #+#             */
/*   Updated: 2021/05/21 11:42:05 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	init(int *a, int *b)
{
	*a = 0;
	*b = 0;
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strj;
	int		i_s;
	int		i_j;

	if (!s1 || !s2)
		return (NULL);
	init(&i_s, &i_j);
	strj = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	 if (!strj)
		return (NULL);
	while (s1[i_s])
	{
		strj[i_j] = s1[i_s];
		i_s++;
		i_j++;
	}
	i_s = 0;
	while (s2[i_s])
	{
		strj[i_j] = s2[i_s];
		i_s++;
		i_j++;
	}
	strj[i_j] = '\0';
	return (strj);
}
