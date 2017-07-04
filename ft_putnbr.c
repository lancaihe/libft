/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkreitz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 10:04:37 by pkreitz           #+#    #+#             */
/*   Updated: 2016/11/10 14:06:10 by pkreitz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr(int n)
{
	long	n1;

	n1 = (long)n;
	if (n1 < 0)
	{
		ft_putchar('-');
		n1 = -n1;
	}
	if (n1 > 0 && n1 < 10)
	{
		ft_putchar(n1 + '0');
		return ;
	}
	if (n1 >= 10)
	{
		ft_putnbr(n1 / 10);
		ft_putnbr(n1 % 10);
	}
	else
		ft_putchar(n1 + '0');
}
