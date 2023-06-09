/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkosemen <mkosemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:14:19 by mkosemen          #+#    #+#             */
/*   Updated: 2023/06/05 15:14:53 by mkosemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	*upper_func(int *stack, int arg)
{
	int	i;

	i = arg - 1;
	while (i >= 0)
	{
		stack[i + 1] = stack[i];
		i--;
	}
	return (stack);
}

int	*lower_func(int *stack, int arg)
{
	int	i;

	i = 1;
	while (i <= arg)
	{
		stack[i - 1] = stack[i];
		i++;
	}
	return (stack);
}

int	*upper_cast_index(t_stack *stack, int size)
{
	int		i;

	i = size - 2;
	while (i >= 0)
	{
		stack->index[i + 1] = stack->index[i];
		i--;
	}
	return (stack->index);
}

int	*lower_cast_index(t_stack *stack, int size)
{
	int		k;

	k = 1;
	while (k <= size)
	{
		stack->index[k - 1] = stack->index[k];
		k++;
	}
	return (stack->index);
}
