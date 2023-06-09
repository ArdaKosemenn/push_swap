/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkosemen <mkosemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:46:55 by mkosemen          #+#    #+#             */
/*   Updated: 2023/06/05 15:13:53 by mkosemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	rotate_index(t_stack *stack)
{
	int		tmp;
	int		i;
	int		k;

	i = stack->arg - 1;
	tmp = stack->index[i];
	stack->index[i] = stack->index[0];
	while (i >= 0)
	{
		k = stack->index[i - 1];
		stack->index[i - 1] = tmp;
		tmp = k;
		i--;
	}
}

void	rotate(t_stack *stack)
{
	int	temp;
	int	i;

	if (stack->arg > 1)
	{
		temp = stack->cost[0];
		i = 0;
		while (i < stack->arg - 1)
		{
			stack->cost[i] = stack->cost[i + 1];
			i++;
		}
		stack->cost[i] = temp;
	}
	rotate_index(stack);
}

void	ra(t_stack *stack_a)
{
	rotate(stack_a);
	write(1, "ra\n", 3);
}

void	rb(t_stack *stack_b)
{
	rotate(stack_b);
	write(1, "rb\n", 3);
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
}
