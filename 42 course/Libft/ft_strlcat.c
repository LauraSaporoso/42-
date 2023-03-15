/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaporos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:05:55 by lsaporos          #+#    #+#             */
/*   Updated: 2022/10/20 11:05:39 by lsaporos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	b;
	size_t	len_src;
	size_t	len_dst;
	size_t	result;
	char	*s;

	if (!dst)
		return (0);
	s = (char *)src;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	result = 0;
	b = 0;
	result = len_src + size;
	if (size > len_dst)
		result = len_src + len_dst;
	while (s[b] && (len_dst + 1) < size)
	{
		dst[len_dst] = s[b];
		len_dst++;
		b++;
	}
	if (len_dst < size)
		dst[len_dst] = '\0';
	return (result);
}
