/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkosemen <mkosemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:13:51 by mkosemen          #+#    #+#             */
/*   Updated: 2023/05/30 15:13:51 by mkosemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	free_fonc(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

void	reverse_free(t_stack *stack, char **str)
{
	int		c;

	c = stack->arg - 1;
	while (c != -1)
	{
		free(str[c]);
		c--;
	}
	free(str);
}
