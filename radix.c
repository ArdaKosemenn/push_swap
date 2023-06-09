/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkosemen <mkosemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:46:45 by mkosemen          #+#    #+#             */
/*   Updated: 2023/05/30 16:46:45 by mkosemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	find_maxbit(t_stack *stack_a)
{
	int	maxbit;

	maxbit = 0;
	while (stack_a->index[stack_a->index_highest] >> maxbit != 0)
		maxbit++;
	return (maxbit);
}

void	radix(t_stack *stack_a, t_stack *stack_b)
{
	int	maxbit;
	int	i;
	int	j;
	int	arg;

	i = 0;
	arg = stack_a->arg;
	maxbit = find_maxbit(stack_a);
	while (i < maxbit)
	{
		j = 0;
		while (j < arg)
		{
			if (((stack_a->index[0] >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while (stack_b->arg != 0)
			pa(stack_a, stack_b);
		i++;
	}
}
