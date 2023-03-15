/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsaporos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:05:43 by lsaporos          #+#    #+#             */
/*   Updated: 2023/03/15 10:28:13 by lsaporos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minitalk_bonus.h"

static void	ft_risp_server(int sig)
{
	(void)sig;
	ft_printf("Messaggino ricevuto correttamente\n");
	exit(0);
}

void	send_msg_in_bit(int id, char c)
{
	int		bit;

	bit = 0;
	while (bit < 8)
	{
		if ((c & (0x01 << bit)) != 0)
			kill(id, SIGUSR1);
		else
			kill(id, SIGUSR2);
		usleep(100);
		bit++;
	}
}

int	main(int argc, char **argv)
{
	int		idserver;
	int		i;

	i = 0;
	if (argc == 3)
	{
		idserver = ft_atoi(argv[1]);
		while (argv[2][i] != '\0')
		{
			signal(SIGUSR1, ft_risp_server);
			signal(SIGUSR2, ft_risp_server);
			send_msg_in_bit(idserver, argv[2][i]);
			i++;
		}
		send_msg_in_bit(idserver, '\0');
		send_msg_in_bit(idserver, '\n');
	}
	else
	{
		ft_printf("Errore numero argomenti\n");
		return (1);
	}
	return (0);
}
