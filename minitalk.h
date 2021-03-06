/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 09:34:19 by qbonvin           #+#    #+#             */
/*   Updated: 2022/03/01 11:54:00 by qbonvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "./libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <stdlib.h>
# include <sys/types.h>
# include <stdarg.h>
# include <signal.h>

void	ft_string_to_binary(char *str, int pid);
int		ft_pow(int loop);
int		kill(pid_t pid, int sig);
void	signal_received(int sig);

#endif