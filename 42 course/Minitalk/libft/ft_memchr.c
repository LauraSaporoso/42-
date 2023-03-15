/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaporos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:31:14 by lsaporos          #+#    #+#             */
/*   Updated: 2022/10/20 18:12:56 by lsaporos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		ch_to_find;
	size_t				max_count;

	ptr = (unsigned char *)s;
	ch_to_find = (unsigned char)c;
	max_count = 0;
	while (max_count < n)
	{
		if (ptr[max_count] == ch_to_find)
		{
			return ((void *)&ptr[max_count]);
		}
		max_count++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[10] = "ABFDEF";

    printf("originale: %s \n", memchr(s, 'F', 5));
    printf("mine: %s \n", ft_memchr(s, 'F', 5));

    // printf("%p\n", s);
    // printf("%p\n", s + 1);
    // printf("%p\n", s + 2);
    // printf("%p\n", s + 3);
    return (0);
}
*/
