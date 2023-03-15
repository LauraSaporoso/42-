/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaporos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:41:06 by lsaporos          #+#    #+#             */
/*   Updated: 2022/11/07 16:20:37 by lsaporos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		b;
	char	*newstr;

	i = 0;
	b = 0;
	newstr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!newstr)
		return (NULL);
	while (s1[b])
	{
		newstr[i] = s1[b];
		i++;
		b++;
	}
	b = 0;
	while (s2[b])
	{
		newstr[i] = s2[b];
		i++;
		b++;
	}
	newstr[i] = '\0';
	return (newstr);
}
