/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaporos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:08:24 by lsaporos          #+#    #+#             */
/*   Updated: 2022/11/07 16:15:23 by lsaporos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	b;
	char	*substr;

	i = start;
	b = 0;
	if (start >= ft_strlen(s))
		len = 0;
	else if (ft_strlen(s) - start < len)
	{
		len = ft_strlen(s) - start;
	}
	substr = malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	while (b < len && s[i])
	{
		substr[b] = s[i];
		i++;
		b++;
	}
	substr[b] = '\0';
	return (substr);
}
