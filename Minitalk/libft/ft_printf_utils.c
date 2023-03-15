/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaporos <lsaporos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:09:27 by lsaporos          #+#    #+#             */
/*   Updated: 2022/11/14 17:10:08 by lsaporos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_uintlen(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_hexlen(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

int	ft_ptrlen(uintptr_t n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}
