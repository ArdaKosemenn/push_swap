/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkosemen <mkosemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:42:13 by mkosemen          #+#    #+#             */
/*   Updated: 2022/10/27 13:38:54 by mkosemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	a;
	char	*dest;

	dest = b;
	a = 0;
	while (a < len)
	{
		dest[a] = c;
		a++;
	}
	return (dest);
}
