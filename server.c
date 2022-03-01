/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:03:59 by qbonvin           #+#    #+#             */
/*   Updated: 2022/03/01 14:37:06 by qbonvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(void)
{
	int	pid_t;

	pid_t = getpid();
	ft_printf("%d\n", pid_t);
	signal(SIGUSR1, signal_received);
	signal(SIGUSR2, signal_received);
	while (1)
		pause();
	return (0);
}

void	signal_received(int sig)
{
	static int		j = 8;
	static int		tab[8];
	int				res;

	if (sig == SIGUSR1)
		tab[--j] = 1;
	else if (sig == SIGUSR2)
		tab[--j] = 0;
	if (j == 0)
	{
		res = 0;
		while (j < 8)
		{
			if (tab[j] == 1)
				res += ft_pow(j);
			j++;
		}
		write(1, &res, 1);
		j = 8;
	}
}

int	ft_pow(int loop)
{
	int	nb;

	nb = 1;
	while (loop--)
		nb *= 2;
	return (nb);
}
