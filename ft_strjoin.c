/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkreitz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 12:15:01 by pkreitz           #+#    #+#             */
/*   Updated: 2016/11/06 21:25:03 by pkreitz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		l;

	if (!s1 || !s2)
		return (0);
	l = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	if (!(s3 = (char *)malloc(sizeof(char const*) * l + 1)))
		return (0);
	ft_strcpy(s3, s1);
	ft_strcat(s3, s2);
	if (!s3)
		return (0);
	return (s3);
}
