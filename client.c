/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:03:20 by qbonvin           #+#    #+#             */
/*   Updated: 2022/02/28 13:14:45 by qbonvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int argc, char *argv[])
{
	int		pid;

	if (argc != 3)
	{
		write(1, "There isn't 2 arguments", 23);
		return (0);
	}
	pid = ft_atoi(argv[1]);
	ft_string_to_binary(argv[2], pid);
	return (0);
}

void	ft_string_to_binary(char *str, int pid)
{
	int	j;
	int	c;

	while (*str)
	{
		c = *str;
		j = 7;
		while (j >= 0)
		{
			if (c >= (1 << j))
			{
				kill(pid, SIGUSR1);
				c = c - (1 << j);
			}
			else
				kill(pid, SIGUSR2);
			usleep(150);
			j--;
		}
		str++;
	}
}

int	ft_atoi(const char *str)
{
	int	index;
	int	sign;
	int	res;

	res = 0;
	sign = 1;
	index = 0;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == 32)
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign *= -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		res = res * 10 + str[index] - '0';
		index++;
	}
	return (res * sign);
}
