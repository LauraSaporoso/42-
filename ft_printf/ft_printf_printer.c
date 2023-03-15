/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_printer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaporos <lsaporos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:09:47 by lsaporos          #+#    #+#             */
/*   Updated: 2022/11/14 17:02:27 by lsaporos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexptr(uintptr_t p)
{
	if (p > 15)
		ft_puthexptr(p / 16);
	write (1, &"0123456789abcdef"[p % 16], 1);
}

void	ft_puthexupp(unsigned int n)
{
	if (n > 15)
		ft_puthexupp(n / 16);
	write (1, &"0123456789ABCDEF"[n % 16], 1);
}

void	ft_puthexlow(unsigned int n)
{
	if (n > 15)
		ft_puthexlow(n / 16);
	write (1, &"0123456789abcdef"[n % 16], 1);
}

void	ft_putunbr(unsigned int u)
{
	long	ln;

	ln = u;
	if (ln > 9)
		ft_putnbr((int)(ln / 10));
	write (1, &"0123456789"[ln % 10], 1);
}

void	ft_putnbr(int n)
{
	long	ln;

	ln = n;
	if (ln < 0)
	{
		ln *= -1;
		write (1, "-", 1);
	}
	if (ln > 9)
		ft_putnbr ((int)(ln / 10));
	write (1, &"0123456789"[ln % 10], 1);
}
