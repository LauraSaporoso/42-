/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaporos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:16:38 by lsaporos          #+#    #+#             */
/*   Updated: 2022/10/20 18:12:12 by lsaporos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	t;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	t = (unsigned char)c;
	while (i < n)
	{
		p[i] = t;
		i++;
	}
	return (p);
}
