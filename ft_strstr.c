/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkreitz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 19:44:38 by pkreitz           #+#    #+#             */
/*   Updated: 2016/11/04 14:29:18 by pkreitz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *big, const char *little)
{
	size_t		size;
	int			i;

	i = 0;
	if (!*little)
		return ((char *)big);
	size = ft_strlen((char *)little);
	while (*big)
	{
		if (ft_strncmp(big, little, size) == 0)
			return ((char *)&big[i]);
		big++;
	}
	return (0);
}
