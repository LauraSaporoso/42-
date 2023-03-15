/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaporos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:20:49 by lsaporos          #+#    #+#             */
/*   Updated: 2022/10/20 11:17:24 by lsaporos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*d;
	char	ic;
	int		i;

	d = (char *) s;
	ic = (char) c;
	i = ft_strlen(d);
	if (ic == 0)
		return (d + i);
	while (i >= 0)
	{
		if (d[i] == ic)
			return (d + i);
		i--;
	}
	return (NULL);
}
