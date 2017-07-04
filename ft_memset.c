/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkreitz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 14:32:48 by pkreitz           #+#    #+#             */
/*   Updated: 2016/09/28 23:54:54 by pkreitz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*cur;

	cur = (unsigned char *)b;
	while (len > 0)
	{
		*cur = (unsigned char)c;
		cur++;
		len--;
	}
	return (b);
}
