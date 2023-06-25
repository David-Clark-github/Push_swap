/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_s.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dclark <dclark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 11:59:44 by dclark            #+#    #+#             */
/*   Updated: 2021/07/09 09:59:48 by dclark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_S_H
# define P_S_H

# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include "libft.h"

# define ERROR	-1
# define OK		0

typedef struct s_pile {
	int	*pile;
	int	size;
	int	sz_max;
	int	tmp;
}				t_pile;

typedef struct s_push_swap {
	t_pile	pile_a;
	t_pile	pile_b;
	int		size_chunk;
	int		min;
	int		max;
	int		flag;
	int		top_bot;
	int		bot_top;
	int		max_top;

}				t_p_s;

void	taking_data(t_p_s *data, int ac, char **av);
void	check_error(int ac, char **av, t_p_s *data);
int		check_argument(int ac, char **av);
int		check_doublons(t_pile a);
int		size_arg(int ac, char **av);
int		sort(t_p_s *data);
int		half_sort(t_p_s *data);
void	ft_error(t_p_s *data);
void	sa(t_pile *a);
void	sb(t_pile *b);
void	ss(t_pile *a, t_pile *b);
void	pa(t_pile *a, t_pile *b);
void	pb(t_pile *a, t_pile *b);
void	ra(t_pile *a);
void	rb(t_pile *b);
void	rr(t_pile *a, t_pile *b);
void	rra(t_pile *a);
void	rrb(t_pile *b);
void	rrr(t_pile *a, t_pile *b);

int		ft_top_bot(t_p_s *data, int min, int max);
int		ft_bot_top(t_p_s *data, int min, int max);

void	small_val(t_p_s *data);
void	small_val_plus(t_p_s *data);
void	three_val(t_p_s *data);
void	chunk_2(t_p_s *data, int target);

void	print_pile_2(t_p_s *data);
void	print_pile(t_pile *pile, char c);
#endif
