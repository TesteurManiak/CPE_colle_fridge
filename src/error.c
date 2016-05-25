/*
** error.c for error in /home/allary_q/rendu/sdeux/fridge/error
** 
** Made by quentin allary
** Login   <allary_q@epitech.net>
** 
** Started on  Tue May 24 18:15:39 2016 quentin allary
** Last update Tue May 24 19:35:43 2016 quentin allary
*/

#include "../include/my.h"

void  disp_err(char *str)
{
  err(39);
  my_puterr(str);
  my_puterr("': Invalid operation\n");
}

void	check_cmd(char *str, t_fridge *prog)
{
  if (my_strncmp(str, "addToFridge", 11) == 0)
    add_fridge(str, prog);
  else if (my_strcmp(str, "disp fridge") == 0)
    disp_fridge(prog);
  else if (my_strncmp(str, "make", 4) == 0)
    make_meal(str, prog);
  else if (my_strcmp(str, "exit") == 0)
  {
    save_fridge(prog);
    prog->kill = 1;
  }
  else
    disp_err(str);
}

int	check_char(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >57 || str[i] < 48)
	my_puterr("Error : only numbers are allowed\n");
    }
  return (0);
}

int	check_elem(char *str)
{
  if (my_strncmp(str, "tomato", 6) == 0 || my_strncmp(str, "dough", 5) == 0)
    return (0);
  else if (my_strncmp(str, "ognons", 6) == 0 || my_strncmp(str, "pasta", 5) == 0)
    return (0);
  else if (my_strncmp(str, "olive", 5) == 0 || my_strncmp(str, "pepper", 6) == 0)
    return (0);
  else if (my_strncmp(str, "ham", 3) == 0 || my_strncmp(str, "cheese", 6) == 0)
    return (0);
  my_puterr("Error : unknown components\n");
  return (-1);
}
