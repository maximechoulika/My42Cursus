/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaxime <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 13:32:29 by cmaxime           #+#    #+#             */
/*   Updated: 2017/11/16 17:17:07 by cmaxime          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_printmap(unsigned long *map)
{
	size_t	i;

	if (map)
	{
		i = 0;
		while (i < 64)
		{
			ft_printbit(map[i]);
			ft_putchar('\n');
			i++;
		}
	}
}