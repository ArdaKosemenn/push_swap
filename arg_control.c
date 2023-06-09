/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_control.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkosemen <mkosemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 14:23:32 by mkosemen          #+#    #+#             */
/*   Updated: 2023/06/02 14:34:14 by mkosemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	two_arg(t_stack *stack)
{
	if (stack->cost[0] > stack->cost[1])
		sa (stack);
}

void	three_arg(t_stack *stack)
{
	if (stack->cost[2] > stack->cost[1] && stack->cost[2] > stack->cost[0])
	{
		if (stack->cost[0] > stack->cost[1])
			sa(stack);
	}
	else if (stack->cost[1] > stack->cost[0] && stack->cost[1] > stack->cost[2])
	{
		if (stack->cost[0] > stack->cost[2])
			rra(stack);
		else
		{
			rra(stack);
			sa(stack);
		}
	}
	else if (stack->cost[0] > stack->cost[1] && stack->cost[0] > stack->cost[2])
	{
		if (stack->cost[1] > stack->cost[2])
		{
			sa(stack);
			rra(stack);
		}
		else
			ra(stack);
	}
}

int	find_small(int *cost, int arg)
{
	int	small;
	int	i;

	i = 0;
	small = cost[0];
	while (i < arg)
	{
		if (cost[i] < small)
		{
			small = cost[i];
			i = 0;
		}
		i++;
	}
	return (small);
}

void	index_top(t_stack *stack)
{
	int	i;
	int	small;

	i = 0;
	small = find_small(stack->cost, stack->arg);
	while (stack->cost[i] != small)
		i++;
	if (i <= stack->arg / 2)
	{
		while (stack->cost[0] != small)
			ra(stack);
	}
	else
	{
		while (stack->cost[0] != small)
			rra(stack);
	}
}

void	five_arg(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->arg == 4)
	{
		if ((stack_a->cost[0] < stack_a->cost[1])
			&& (stack_a->cost[1] < stack_a->cost[2])
			&& (stack_a->cost[2] < stack_a->cost[3]))
			exit(0);
	}
	if (stack_a->arg == 5)
	{
		if ((stack_a->cost[0] < stack_a->cost[1])
			&& (stack_a->cost[1] < stack_a->cost[2])
			&& (stack_a->cost[2] < stack_a->cost[3])
			&& (stack_a->cost[3] < stack_a->cost[4]))
			exit(0);
	}
	while (stack_a->arg > 3)
	{
		if (stack_a->cost[0] == find_small(stack_a->cost, stack_a->arg))
			pb(stack_a, stack_b);
		else
			index_top(stack_a);
	}
	three_arg(stack_a);
	while (stack_b->arg > 0)
		pa(stack_a, stack_b);
}
