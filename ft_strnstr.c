/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkreitz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 20:45:03 by pkreitz           #+#    #+#             */
/*   Updated: 2016/11/07 18:39:30 by pkreitz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *b, const char *l, size_t len)
{
	int	i;
	int	k;
	int	s;

	if (!*l)
		return (char *)(b);
	i = 0;
	while (b[i] && len > 0)
	{
		if (len < ft_strlen((char *)l))
			return (NULL);
		k = 0;
		s = i;
		while (b[s] == l[k] && l[k] && b[s])
		{
			k++;
			s++;
		}
		if (l[k] == '\0')
			return ((char *)b + i);
		len--;
		i++;
	}
	return (NULL);
}
