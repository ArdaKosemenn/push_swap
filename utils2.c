/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkosemen <mkosemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:47:06 by mkosemen          #+#    #+#             */
/*   Updated: 2023/05/30 16:47:06 by mkosemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sort_control(t_stack *stack_a, int i, int j, int arg)
{
	int	a;

	while (j < arg)
	{
		if (stack_a->index[i] == stack_a->index[j])
		{
			if (stack_a->cost[i] > stack_a->cost[j])
			{
				stack_a->index[i] += 1;
				break ;
			}
			else if (stack_a->cost[i] < stack_a->cost[j])
			{
				stack_a->index[j] += 1;
				break ;
			}
		}
		j++;
	}
}

void	ft_sort_index(t_stack *stack_a)
{
	int	i;
	int	j;
	int	arg;

	arg = stack_a->arg;
	i = 0;
	while (stack_a->index[i] != arg - 1)
	{
		j = i + 1;
		sort_control(stack_a, i, j, arg);
		i++;
		if (i >= arg)
			i = 0;
	}
}

void	sort_index_zero(t_stack *stack_a)
{
	int	i;

	i = 0;
	while (++i < stack_a->arg)
	{
		stack_a->index[i] = 0;
	}
	ft_sort_index(stack_a);
}

void	find_highest(t_stack *stack)
{
	int	i;
	int	highest;

	i = 0;
	highest = stack->cost[0];
	stack->index_highest = 0;
	while (++i < stack->arg)
	{
		if (highest < stack->cost[i])
		{
			highest = stack->cost[i];
			stack->index_highest = i;
		}
	}
}

int	is_sorted(t_stack *stack_a)
{
	int		i;
	int		j;

	i = 0;
	while (i < stack_a->arg)
	{
		j = i + 1;
		while (j < stack_a->arg)
		{	
			if (stack_a->cost[j] < stack_a->cost[i])
			{
				find_highest(stack_a);
				return (0);
			}
			j++;
		}
		i++;
	}
	exit(0);
}
