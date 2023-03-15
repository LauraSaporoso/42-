/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaporos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:31:28 by lsaporos          #+#    #+#             */
/*   Updated: 2022/10/20 17:43:19 by lsaporos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*c;
	size_t	s;

	s = nmemb * size;
	if (nmemb != 0 && s / nmemb != size)
		return (NULL);
	c = malloc(s);
	if (!c)
		return (NULL);
	ft_bzero(c, s);
	return (c);
}
