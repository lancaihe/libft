/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkreitz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 17:10:23 by pkreitz           #+#    #+#             */
/*   Updated: 2016/11/07 18:42:30 by pkreitz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*newstr;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (0);
	if (!(newstr = (char *)malloc(sizeof(*s) * (ft_strlen((char *)s) + 1))))
		return (NULL);
	while (i < ft_strlen((char *)s))
	{
		newstr[i] = f(s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
