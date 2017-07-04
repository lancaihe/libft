/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkreitz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 10:59:00 by pkreitz           #+#    #+#             */
/*   Updated: 2016/11/07 18:41:53 by pkreitz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstr;
	unsigned long	i;

	i = 0;
	if (!s || !f)
		return (0);
	if (!(newstr = ft_strdup((char *)s)))
		return (NULL);
	while (i < ft_strlen((char *)s))
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	return (newstr);
}
