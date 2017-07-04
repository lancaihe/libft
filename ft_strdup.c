/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkreitz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 22:54:45 by pkreitz           #+#    #+#             */
/*   Updated: 2016/11/04 14:35:49 by pkreitz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dup;
	char	*dup_offset;
	int		src_size;

	src_size = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * src_size + 1);
	if (dup == NULL)
		return ((char *)NULL);
	dup_offset = dup;
	while (*src)
	{
		*dup_offset = *src;
		dup_offset++;
		src++;
	}
	*dup_offset = '\0';
	return (dup);
}
