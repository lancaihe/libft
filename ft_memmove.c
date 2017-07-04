/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkreitz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/30 13:23:03 by pkreitz           #+#    #+#             */
/*   Updated: 2016/11/08 21:06:53 by pkreitz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*pd;
	char	*ps;
	size_t	i;

	i = 0;
	pd = dst;
	ps = (char*)src;
	if (dst > src)
	{
		while (len--)
		{
			pd[len] = ps[len];
		}
	}
	else
	{
		while (i < len)
		{
			pd[i] = ps[i];
			i++;
		}
	}
	return (dst);
}
