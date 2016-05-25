/*
** my.h for my in /home/roux_l/rendu/fridge/include
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 24 18:21:56 2016 Guillaume Roux
** Last update  Tue May 24 18:21:56 2016 Guillaume Roux
*/

#ifndef MY_H_
# define MY_H_

# define D_QTE (50)

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct  s_fridge
{
  int           tomato;
  int           dough;
  int           ognons;
  int           pasta;
  int           olive;
  int           pepper;
  int           ham;
  int           cheese;
  int           kill;
}               t_fridge;

int   my_strlen(char *str);
int   total_len(char **tab);
int   nb_compo_pizza(t_fridge *prog);
int   nb_compo_pasta(t_fridge *prog);
int   make_meal(char *name, t_fridge *prog);
int   my_strcmp(char *s1, char *s2);
int   check_char(char *str);
int   check_elem(char *str);
int   my_getnbr(char *str);
int   add_fridge(char *str, t_fridge *prog);
int   my_strncmp(char *s1, char *s2, int i);

char  *my_strcat(char *s1, char *s2);
char  **my_str_to_wordtab(char *str);
char  *my_strncpy(char *s1, char *s2, int i);
char  *get_next_line(const int fd);

void  write_in_fd(int fd, char *str);
void  free_tab(char **tab);
void  save_fridge(t_fridge *prog);
void  my_putchar(char c);
void  my_putstr(char *str);
void  my_put_nbr(int nb);
void  check_cmd(char *str, t_fridge *prog);
void  init_prog(t_fridge **prog);
void  disp_fridge(t_fridge *prog);
void  err(char c);
void  my_puterr(char *str);

#endif /* !MY_H_ */