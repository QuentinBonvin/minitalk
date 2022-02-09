/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:03:59 by qbonvin           #+#    #+#             */
/*   Updated: 2022/02/09 10:14:30 by qbonvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(void)
{
    int pid_t = getpid();
    int pid_p = getppid();
    printf("pid = %d", pid_t);
    printf("pid = %d", pid_p);
    return (0);
}