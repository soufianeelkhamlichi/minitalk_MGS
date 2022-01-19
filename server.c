/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 22:16:02 by sel-kham          #+#    #+#             */
/*   Updated: 2022/01/19 23:07:34 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h> 
#include <sys/types.h> /* various type definitions, like pid_t */
#include <signal.h>

void	sig_handler(int signum)
{
	printf("Segnal captured: %d\n", signum);
}

int	main(int c, char **v)
{
	pid_t	my_pid;

    my_pid = getpid();
	signal(SIGUSR1, sig_handler);
	printf("Server's PID: %d\n", my_pid);
	while (1)
		pause();
	
}