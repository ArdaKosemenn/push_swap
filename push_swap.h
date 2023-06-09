/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkosemen <mkosemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:19:46 by mkosemen          #+#    #+#             */
/*   Updated: 2023/06/05 15:29:24 by mkosemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./ft_libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int	arg;
	int	*cost;
	int	index_highest;
	int	*index;
	int	indexsize;
}t_stack;

static		int	ft_word_check(const char *s, char c);
static		int	ft_word_print(const char *s, char c);
char		**ft_split(const char *s, char c);
int			ft_atoi(const char *str);
void		atoi_max_min_func(long result);
void		three_arg(t_stack *stack);
void		two_arg(t_stack *stack);
void		rotate(t_stack *stack);
void		ra(t_stack *stack_a);
void		rb(t_stack *stack_b);
void		rr(t_stack *stack_a, t_stack *stack_b);
void		reverse_rotate(t_stack *stack);
void		rra(t_stack *stack_a);
void		rrb(t_stack *stack_b);
void		rrr(t_stack *stack_a, t_stack *stack_b);
void		pa(t_stack *stack_a, t_stack *stack_b);
void		pb(t_stack *stack_a, t_stack *stack_b);
int			*upper_func(int *stack, int arg);
int			*lower_func(int *stack, int arg);
void		pa(t_stack *stack_a, t_stack *stack_b);
void		pb(t_stack *stack_a, t_stack *stack_b);
int			count_arg(char **av);
int			main(int argc, char **av);
int			count_arg(char **av);
void		swap(t_stack *stack);
void		sa(t_stack *stack_a);
void		sb(t_stack *stack_b);
void		ss(t_stack *stack_a, t_stack *stack_b);
void		arg_to_int(t_stack *stack, char **av);
void		five_arg(t_stack *stack_a, t_stack *stack_b);
void		max_min_int(t_stack *stack);
void		not_int(char a);
void		next_index(char *s);
int			check_duplicate(t_stack *stack);
char		**split_and_add(char **av, t_stack *stack);
void		symbolcontrol(char **av, t_stack *stack);
void		free_fonc(char **str);
int			is_sorted(t_stack *stack_a);
void		find_highest(t_stack *stack);
void		sort_index_zero(t_stack *stack_a);
void		ft_sort_index(t_stack *stack_a);
void		sort_control(t_stack *stack_a, int i, int j, int arg);
int			find_maxbit(t_stack *stack_a);
void		ft_sort_index(t_stack *stack_a);
void		radix(t_stack *stack_a, t_stack *stack_b);
void		malloc_fonc(t_stack *stack_a, t_stack *stack_b, char **av);
void		reverse_free(t_stack *stack, char **str);
int			find_small(int *cost, int arg);
void		index_top(t_stack *stack);
void		rotate_index(t_stack *stack);
void		ft_pb_index(t_stack *stack_a, t_stack *stack_b);
int			*lower_cast_index(t_stack *stack, int size);
int			*upper_cast_index(t_stack *stack, int size);
void		ft_pa_index(t_stack *stack_a, t_stack *stack_b);

#endif