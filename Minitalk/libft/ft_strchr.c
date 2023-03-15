/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaporos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:37:38 by lsaporos          #+#    #+#             */
/*   Updated: 2023/03/15 10:53:10 by lsaporos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	ch;
	int		i;

	str = (char *) s;
	ch = (char) c;
	i = 0;
	while (str[i] == '\0')
	{
		if (str[i] == ch)
			return (str);
		i++;
	}
	if (ch == '\0')
		return (str);
	return (NULL);
}
