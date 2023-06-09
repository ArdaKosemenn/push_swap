/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkosemen <mkosemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 01:34:02 by mkosemen          #+#    #+#             */
/*   Updated: 2023/06/05 15:11:47 by mkosemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	count_arg(char **av)
{
	char	**str;
	int		word_count;
	int		i;
	int		x;

	i = 1;
	word_count = 0;
	while (av[i])
	{
		str = ft_split(av[i], ' ');
		x = 0;
		while (str[x])
		{
			word_count++;
			x++;
		}
		i++;
		free_fonc(str);
	}
	return (word_count);
}

void	malloc_fonc(t_stack *stack_a, t_stack *stack_b, char **av)
{
	stack_a->arg = count_arg(av);
	stack_b->arg = 0;
	stack_a->cost = (int *)malloc(sizeof(int) *(stack_a->arg));
	stack_b->cost = (int *)malloc(sizeof(int) *(stack_a->arg));
	stack_a->indexsize = count_arg(av);
	stack_b->indexsize = 0;
	stack_a->index = malloc(sizeof(int) * stack_a->arg);
	stack_b->index = malloc(sizeof(int) * stack_a->arg);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = malloc(sizeof(t_stack));
	stack_b = malloc(sizeof(t_stack));
	malloc_fonc(stack_a, stack_b, av);
	arg_to_int(stack_a, av);
	max_min_int(stack_a);
	symbolcontrol(av, stack_a);
	check_duplicate(stack_a);
	if (ac == 1 || stack_a->arg == 1)
		exit(0);
	else if (stack_a->arg == 2)
		two_arg(stack_a);
	else if (stack_a->arg == 3)
		three_arg(stack_a);
	else if (stack_a->arg == 4 || stack_a->arg == 5)
		five_arg(stack_a, stack_b);
	else if (stack_a->arg > 5)
	{
		is_sorted(stack_a);
		sort_index_zero(stack_a);
		radix(stack_a, stack_b);
	}
}
