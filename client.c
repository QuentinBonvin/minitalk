/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:03:20 by qbonvin           #+#    #+#             */
/*   Updated: 2022/02/09 11:36:24 by qbonvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


int main(void)
{
    int pid_t = getpid();
    int pid_d = getppid();
    printf("pid = %d", pid_t);
    printf("pid = %d", pid_d);
    return (0);
}