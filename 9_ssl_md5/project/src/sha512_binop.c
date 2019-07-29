/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sha512_binop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaxime <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:57:04 by cmaxime           #+#    #+#             */
/*   Updated: 2019/05/28 13:57:05 by cmaxime          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sha2.h"

uint64_t	sha512_ch(uint64_t x, uint64_t y, uint64_t z)
{
	return (((x) & (y)) ^ (~(x) & (z)));
}

uint64_t	sha512_maj(uint64_t x, uint64_t y, uint64_t z)
{
	return (((x) & (y)) ^ ((x) & (z)) ^ ((y) & (z)));
}
