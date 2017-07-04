/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkreitz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 21:54:47 by pkreitz           #+#    #+#             */
/*   Updated: 2016/11/07 19:05:12 by pkreitz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if ((unsigned char)*s1 < (unsigned char)*s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		if ((unsigned char)*s1 > (unsigned char)*s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
