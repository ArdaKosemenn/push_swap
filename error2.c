/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkosemen <mkosemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:56:57 by mkosemen          #+#    #+#             */
/*   Updated: 2023/05/30 20:50:55 by mkosemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

char	**split_and_add(char **av, t_stack *stack)
{
	char	**str;
	char	**s;
	int		k;
	int		j;
	int		i;

	k = 1;
	j = 0;
	i = 0;
	s = malloc(sizeof(char *) * stack->arg);
	while (av[k])
	{
		str = ft_split(av[k], ' ');
		while (str[j])
		{
			s[i] = str[j];
			j++;
			i++;
		}
		j = 0;
		k++;
		free(str);
	}
	return (s);
}
