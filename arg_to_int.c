/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_to_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkosemen <mkosemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:46:20 by mkosemen          #+#    #+#             */
/*   Updated: 2023/05/30 16:46:20 by mkosemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	arg_to_int(t_stack *stack, char **av)
{
	char	**str;
	int		k;
	int		j;
	int		i;

	k = 1;
	j = 0;
	i = 0;
	while (av[k])
	{
		str = ft_split(av[k], ' ');
		while (str[j])
		{
			stack->cost[i] = ft_atoi(str[j]);
			j++;
			i++;
		}
		j = 0;
		k++;
		free_fonc(str);
	}
}
