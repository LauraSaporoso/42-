/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaporos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:47:32 by lsaporos          #+#    #+#             */
/*   Updated: 2023/03/15 10:13:45 by lsaporos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minitalk_bonus.h"

void	ft_handler(int signal, siginfo_t *siginf, void *nope)
{
	static int	i;
	static int	bit;

	(void)siginf;
	(void)nope;
	if (signal == SIGUSR1 && bit <= 8)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		if (i == '\0')
		{
			ft_printf("\n");
			kill(siginf->si_pid, SIGUSR1);
		}
		ft_printf("%c", i);
		bit = 0;
		i = 0;
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	struttura;
	int					pid;

	(void)argv;
	if (argc != 1)
	{
		ft_printf("Errore formato, ritenta");
		return (0);
	}
	pid = getpid();
	ft_printf("Pid del server: %d\n", pid);
	struttura.sa_sigaction = ft_handler;
	sigemptyset(&struttura.sa_mask);
	struttura.sa_flags = SA_SIGINFO;
	while (argc == 1)
	{
		sigaction(SIGUSR1, &struttura, NULL);
		sigaction(SIGUSR2, &struttura, NULL);
		pause();
	}
	return (0);
}
