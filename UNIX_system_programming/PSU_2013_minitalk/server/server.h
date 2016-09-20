/*
** server.h for Epitech-projects in /home/rishy/Cours/Epitech-projects/UNIX_system_programming/PSU_2013_minitalk/server
**
** Made by Rishy
** Login   <rishy@epitech.net>
**
** Started on  Tue Sep 20 09:18:02 2016 Rishy
** Last update Tue Sep 20 09:18:47 2016 Rishy
*/

#ifndef SERVER_H_
# define SERVER_H_

# define SUCCESS	(0)
# define FAILURE	(-1)
# define INIT_MSG	"Client can send message \"#kill server\" \
anytime to terminate process.\nServer PID is: "

typedef struct  sigaction       t_sig;

typedef struct  s_client
{
  char          c;
  int           *queue;
  char          *msg;
}               t_client;

/*
**	Server
*/
char	*add_char(char *, char);

int	*add_client(int *, int, int);

int	*remove_client(int *, int);

/*
**	Libmy
*/
void	my_exit(char *, int *);

void	my_putstr(char *);

void	my_put_nbr(int);

void	my_putchar(char);

int	my_strlen(char *);

int	msg_error(char *);

int	my_strcmp(char *, char *);

#endif /* !SERVER_H_ */
