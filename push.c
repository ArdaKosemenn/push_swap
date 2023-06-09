/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkosemen <mkosemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 00:17:08 by mkosemen          #+#    #+#             */
/*   Updated: 2023/03/31 00:17:08 by mkosemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_pa_index(t_stack *stack_a, t_stack *stack_b)
{
	stack_a->indexsize++;
	stack_a->index = upper_cast_index(stack_a, stack_a->indexsize);
	stack_a->index[0] = stack_b->index[0];
	stack_b->indexsize--;
	stack_b->index = lower_cast_index(stack_b, stack_b->indexsize);
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	stack_a->arg++;
	stack_a->cost = upper_func(stack_a->cost, stack_a->arg);
	stack_a->cost[0] = stack_b->cost[0];
	stack_b->arg--;
	stack_b->cost = lower_func(stack_b->cost, stack_b->arg);
	if (stack_a->indexsize + stack_b->indexsize > 5)
		ft_pa_index(stack_a, stack_b);
	write(1, "pa\n", 3);
}

void	ft_pb_index(t_stack *stack_a, t_stack *stack_b)
{
	stack_b->indexsize++;
	stack_b->index = upper_cast_index(stack_b, stack_b->indexsize);
	stack_b->index[0] = stack_a->index[0];
	stack_a->indexsize--;
	stack_a->index = lower_cast_index(stack_a, stack_a->indexsize);
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	stack_b->arg++;
	stack_b->cost = upper_func(stack_b->cost, stack_b->arg);
	stack_b->cost[0] = stack_a->cost[0];
	stack_a->arg--;
	stack_a->cost = lower_func(stack_a->cost, stack_a->arg);
	if (stack_a->indexsize + stack_b->indexsize > 5)
		ft_pb_index(stack_a, stack_b);
	write(1, "pb\n", 3);
}
