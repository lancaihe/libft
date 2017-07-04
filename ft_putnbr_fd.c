/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkreitz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 10:04:37 by pkreitz           #+#    #+#             */
/*   Updated: 2016/10/29 23:42:11 by pkreitz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	long	n1;

	n1 = (long)n;
	if (n1 < 0)
	{
		ft_putchar_fd('-', fd);
		n1 = -n1;
	}
	if (n1 > 0 && n1 < 10)
	{
		ft_putchar_fd(n1 + '0', fd);
		return ;
	}
	if (n1 >= 10)
	{
		ft_putnbr_fd(n1 / 10, fd);
		ft_putnbr_fd(n1 % 10, fd);
	}
	else
		ft_putchar_fd(n1 + '0', fd);
}
