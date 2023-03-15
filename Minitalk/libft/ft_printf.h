/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaporos <lsaporos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:09:32 by lsaporos          #+#    #+#             */
/*   Updated: 2022/11/14 17:16:00 by lsaporos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# include <stdio.h>

int		ft_puthexptr_printer(uintptr_t p);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_puthex(va_list ap, char c);
int		ft_putchars(va_list ap, char c);
int		ft_intlen(int n);
int		ft_uintlen(unsigned int n);
int		ft_hexlen(unsigned int n);
int		ft_ptrlen(uintptr_t n);
int		ft_putnbrs(va_list ap, char c);
int		ft_printf_main(char c, va_list ap);
int		ft_printf(const char *s, ...);
void	ft_puthexptr(uintptr_t p);
void	ft_puthexupp(unsigned int n);
void	ft_puthexlow(unsigned int n);
void	ft_putunbr(unsigned int u);
void	ft_putnbr(int n);

#endif
