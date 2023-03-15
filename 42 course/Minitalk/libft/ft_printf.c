/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaporos <lsaporos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:34:25 by lsaporos          #+#    #+#             */
/*   Updated: 2023/03/15 10:53:44 by lsaporos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(va_list ap, char c)
{
	int				len;
	uintptr_t		p;
	unsigned int	hex;

	len = 0;
	if (c == 'p')
	{
		p = va_arg(ap, uintptr_t);
		len += ft_puthexptr_printer(p);
	}
	else
	{
		hex = va_arg(ap, unsigned int);
		len += ft_hexlen(hex);
		if (c == 'x')
			ft_puthexlow(hex);
		else
			ft_puthexupp(hex);
	}
	return (len);
}

int	ft_putchars(va_list ap, char c)
{
	int		len;
	char	ch;
	char	*str;

	len = 0;
	if (c == 'c' || c == '%')
	{
		if (c == 'c')
		{
			ch = va_arg(ap, int);
			len += ft_putchar(ch);
		}
		else
			len += ft_putchar('%');
	}
	else if (c == 's')
	{
		str = va_arg(ap, char *);
		len += ft_putstr(str);
	}
	return (len);
}

int	ft_putnbrs(va_list ap, char c)
{
	int				len;
	int				nb;
	unsigned int	u;

	len = 0;
	if (c == 'i' || c == 'd')
	{
		nb = va_arg(ap, int);
		len += ft_intlen(nb);
		ft_putnbr(nb);
	}
	else if (c == 'u')
	{
		u = va_arg(ap, unsigned int);
		len += ft_uintlen(u);
		ft_putunbr(u);
	}
	return (len);
}

int	ft_printf_main(char c, va_list ap)
{
	int		len;

	len = 0;
	if (c == 'c' || c == 's' || c == '%')
		len += ft_putchars(ap, c);
	else if (c == 'd' || c == 'i' || c == 'u')
		len += ft_putnbrs(ap, c);
	else if (c == 'x' || c == 'X' || c == 'p')
		len += ft_puthex(ap, c);
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list		ap;
	int			i;
	int			len;

	i = 0;
	len = 0;
	va_start(ap, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			len += ft_printf_main(s[i], ap);
		}
		else
			len = len + ft_putchar(s[i]);
		i++;
	}
	va_end(ap);
	return (len);
}
