/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcopy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkreitz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 14:17:20 by pkreitz           #+#    #+#             */
/*   Updated: 2016/11/09 11:09:25 by pkreitz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_wordcopy(char const *s, char c)
{
	char	*word;
	int		l;
	int		i;

	l = 0;
	while (s[l] && s[l] != c)
		l++;
	word = (char *)malloc(sizeof(char *) * l + 1);
	i = -1;
	while (++i < l)
		word[i] = s[i];
	word[i] = '\0';
	return (word);
}
