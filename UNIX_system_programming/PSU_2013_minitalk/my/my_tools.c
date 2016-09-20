/*
** my_tools.c for Epitech-projects in /home/rishy/Cours/Epitech-projects/UNIX_system_programming/PSU_2013_minitalk/my
**
** Made by Rishy
** Login   <rishy@epitech.net>
**
** Started on  Tue Sep 20 09:24:10 2016 Rishy
** Last update Tue Sep 20 09:24:14 2016 Rishy
*/

#include <unistd.h>
#include <stdlib.h>

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] && s2[i] && s1[i] == s2[i])
    i = i + 1;
  return (s1[i] - s2[i]);
}

void	my_exit(char *msg, int *clients)
{
  free(msg);
  free(clients);
  exit(0);
}
