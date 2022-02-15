/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:03:20 by qbonvin           #+#    #+#             */
/*   Updated: 2022/02/15 16:22:54 by qbonvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <stdlib.h>

int kill( pid_t pid, int sig );
int	ft_atoi(const char *str);

int main(int argc, char *argv[])
{
    int 	pid = ft_atoi(argv[1]);
    int 	second = ft_atoi(argv[2]);
    if (argc != 3)
    {
        printf("There isn't 2 arguments (PID | STRING");
        return (0);
    }
    kill(pid, SIGUSR1);
    kill(second, SIGUSR2);
    return (0);
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
	{
		index++;
	}
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

/**********************************************************************************/

static int	len_number(long *n)
{
	int		len;
	long	n2;

	len = 0;
	if (*n == 0)
	{
		len = 1;
	}
	if (*n < 0)
	{
		*n = *n * -1;
		len++;
	}
	n2 = *n;
	while (n2 > 0)
	{
		n2 = n2 / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		len_str;
	long	nbr;

	nbr = n;
	len_str = len_number(&nbr);
	string = malloc(sizeof(char) * (len_str + 1));
	if (!string)
		return (0);
	string[len_str] = '\0';
	len_str--;
	if (nbr == 0)
	{
		string[0] = 48;
		return (string);
	}
	if (n < 0)
		string[0] = '-';
	while (nbr > 0)
	{
		string[len_str] = 48 + (nbr % 10);
		nbr = nbr / 10;
		len_str--;
	}
	return (string);
}

/********************************************************************************/