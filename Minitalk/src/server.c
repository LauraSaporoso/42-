/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaporos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:35:17 by lsaporos          #+#    #+#             */
/*   Updated: 2023/03/15 10:40:55 by lsaporos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minitalk.h"

void	ft_handler(int signal)
{
	static int		i;
	static int		bit;

	if (signal == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		if (i == '\0')
			ft_printf("\n");
		ft_printf("%c", i);
		bit = 0;
		i = 0;
	}
}

int	main(int argc, char **argv)
{
	int		pid;

	pid = getpid();
	ft_printf("PID del server: %d\n", pid);
	(void)argv;
	while (argc == 1)
	{
		signal(SIGUSR1, ft_handler);
		signal(SIGUSR2, ft_handler);
		pause();
	}
	return (0);
}
