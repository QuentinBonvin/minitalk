/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:03:59 by qbonvin           #+#    #+#             */
/*   Updated: 2022/02/15 16:22:54 by qbonvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <stdlib.h>

void    signal_received(int sig);

void    signal_received(int sig)
{
    if (sig == SIGUSR1)
    {
        write(1, "j'ai recu le signal", 19);
    }
    if (sig == SIGUSR2)
        write(1, "j'ai recu le 2eme signal", 24);
    return ;
}

int main(void)
{
    int pid_t = getpid();
    printf("%d\n", pid_t);
    while (1)
    {
        signal(SIGUSR1, signal_received);
        pause();
        return (0);
    }
    return (0);
}

