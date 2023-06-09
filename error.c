/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkosemen <mkosemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 00:59:59 by mkosemen          #+#    #+#             */
/*   Updated: 2023/06/02 14:08:24 by mkosemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	max_min_int(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack-> arg)
	{
		if (stack->cost[i] > 2147483647 || stack->cost[i] < -2147483648)
		{	
			write(2, "Error\n", 6);
			exit(0);
		}
		i++;
	}
}

void	not_int(char a)
{
	if (!(a >= '0' && a <= '9') && a != '-' && a != '+')
	{
		write(2, "Error\n", 6);
		exit(0);
	}
}

void	next_index(char *s)
{
	int	i;

	i = 1;
	while (s[i])
	{
		if (!(s[i] >= '0' || s[i] == '9'))
		{
			write(2, "Error\n", 6);
			exit(0);
		}
		i++;
	}
}

int	check_duplicate(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->arg - 1)
	{
		j = i + 1;
		while (j < stack->arg)
		{
			if (stack->cost[i] == stack->cost[j])
			{
				write(2, "Error\n", 6);
				exit(0);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	symbolcontrol(char **av, t_stack *stack)
{
	int		i;
	int		k;
	char	**str;

	i = 0;
	k = 0;
	str = split_and_add(av, stack);
	while (k < stack->arg)
	{
		while (str[k][i])
		{
			if ((str[k][0] == '-' || str[k][0] == '+') && str[k][1] == 0)
			{
				write (2, "Error\n", 6);
				exit(0);
			}
			not_int(str[k][i]);
			next_index(str[k]);
			i++;
		}
		i = 0;
		k++;
	}
	reverse_free(stack, str);
}
