/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkreitz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 16:54:34 by pkreitz           #+#    #+#             */
/*   Updated: 2016/11/03 22:08:36 by pkreitz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*nxtlst;
	t_list		*link;

	link = *alst;
	while (link)
	{
		nxtlst = link->next;
		del(link->content, link->content_size);
		free(link);
		link = nxtlst;
	}
	*alst = NULL;
}
