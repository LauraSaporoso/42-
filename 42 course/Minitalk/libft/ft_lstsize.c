/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaporos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:14:10 by lsaporos          #+#    #+#             */
/*   Updated: 2022/11/07 18:45:34 by lsaporos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	lenlst;

	lenlst = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		lenlst++;
	}
	return (lenlst);
}
