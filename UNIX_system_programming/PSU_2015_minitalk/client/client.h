/*
** client.h for Epitech-projects in /home/rishy/Epitech-projects/UNIX_system_programming/PSU_2013_minitalk/client
**
** Made by Rishy
** Login   <rishy@epitech.net>
**
** Started on  Mon Sep 19 14:12:01 2016 Rishy
** Last update Mon Sep 19 14:12:06 2016 Rishy
*/

#ifndef CLIENT_H_
# define CLIENT_H_

# define SUCCESS	(0)
# define FAILURE	(-1)
# define CHECK		(42)
# define PAUSE		(1)
# define BREAK_PAUSE	(0)
# define SUSPEND	(-1)
# define PAUSE_MAX	(100000)

void	my_putstr(char *);

int	msg_error(char *);

int	my_getnbr(char *);

#endif	/* !CLIENT_H_ */
