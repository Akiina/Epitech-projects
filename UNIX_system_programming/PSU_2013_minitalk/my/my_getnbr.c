/*
** my_getnbr.c for Epitech-projects in /home/rishy/Cours/Epitech-projects/UNIX_system_programming/PSU_2013_minitalk/my
**
** Made by Rishy
** Login   <rishy@epitech.net>
**
** Started on  Tue Sep 20 09:23:24 2016 Rishy
** Last update Tue Sep 20 09:23:33 2016 Rishy
*/

int	my_getnbr(char *str)
{
  int	res;
  int	i;

  i = 0;
  res = 0;
  if (!str)
    return (0);
  while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
      res = (res * 10) + (str[i] - 48);
      i = i + 1;
    }
  if (str[i])
    return (0);
  return (res);
}
