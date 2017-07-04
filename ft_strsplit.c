/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkreitz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 14:17:20 by pkreitz           #+#    #+#             */
/*   Updated: 2016/11/13 23:29:52 by pkreitz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_freespace(char *t, int i)
{
	i--;
	while (--i >= 0)
		free((void *)&t[i]);
	free(t);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		i;

	if (!s || !(t = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1))))
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			if (!(t[i++] = ft_wordcopy(s, c)))
			{
				ft_freespace(*t, i);
				return (NULL);
			}
			while (*s && *s != c)
				s++;
		}
		while (*s && *s == c)
			s++;
	}
	t[i] = NULL;
	return (t);
}
