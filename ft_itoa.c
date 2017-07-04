/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkreitz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 15:11:00 by pkreitz           #+#    #+#             */
/*   Updated: 2016/11/09 12:08:54 by pkreitz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		actual_itoa(int l, int e, char *j, int neg)
{
	int		i;

	i = l;
	while (l)
	{
		j[l - 1] = e % 10 + '0';
		e /= 10;
		l--;
	}
	if (neg)
		j[0] = '-';
	j[i] = '\0';
}

char			*ft_itoa(int n)
{
	int		l;
	int		e;
	int		neg;
	char	*j;

	e = n;
	l = 1;
	neg = 0;
	j = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (e < 0)
	{
		e *= -1;
		neg = 1;
		l++;
	}
	while (n /= 10)
		l++;
	if (!(j = (char *)malloc(sizeof(char) * l + 1)))
		return (NULL);
	actual_itoa(l, e, j, neg);
	if (j)
		return (j);
	return (0);
}
