/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkreitz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 18:36:26 by pkreitz           #+#    #+#             */
/*   Updated: 2016/11/04 14:44:14 by pkreitz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *s1, char *s2, size_t n)
{
	int		i;
	int		l;

	l = ft_strlen(s1);
	i = 0;
	while (s2[i] && i < (int)n)
	{
		s1[l + i] = s2[i];
		i++;
	}
	s1[l + i] = '\0';
	return (s1);
}
