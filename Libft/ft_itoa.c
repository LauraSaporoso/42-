/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaporos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:54:10 by lsaporos          #+#    #+#             */
/*   Updated: 2022/11/07 18:25:57 by lsaporos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int n)
{
	int		i;

	i = 1;
	if (n < 0)
		i++;
	while (n / 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned int	i;
	char			*s1;
	long int		nb;

	i = ft_count(n);
	s1 = malloc(sizeof(char) * i + 1);
	nb = (long int)n;
	if (s1 == 0)
		return (NULL);
	s1[i] = '\0';
	if (nb == 0)
		s1[0] = '0';
	if (nb < 0)
	{
		s1[0] = '-';
		nb = nb * -1;
	}
	while (nb != 0)
	{
		i--;
		s1[i] = nb % 10 + 48;
		nb = nb / 10;
	}
	return (s1);
}
