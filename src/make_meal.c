/*
** make_meal.c for make_meal in /home/roux_l/rendu/fridge/src
** 
** Made by Guillaume Roux
** Login   <roux_l@epitech.net>
** 
** Started on Tue May 24 19:58:15 2016 Guillaume Roux
** Last update  Tue May 24 19:58:15 2016 Guillaume Roux
*/

#include "../include/my.h"

void  make_pizza(t_fridge *prog)
{
  nb_compo_pizza(prog);
}

void  make_pasta(t_fridge *prog)
{
  nb_compo_pasta(prog);
}

void  disp_no_meal(char *name)
{
  err(39);
  my_puterr(name);
  my_puterr("': meal unknown\n");
}

int  make_meal(char *name, t_fridge *prog)
{
  char  **tab;

  tab = my_str_to_wordtab(name);
  if (tab[1] == NULL || my_strcmp(tab[0], "make") != 0 ||
      tab[2] != NULL)
  {
    my_puterr("Error : choose a meal\n");
    return (-1);
  }
  if (my_strcmp(tab[1], "pizza") == 0)
    make_pizza(prog);
  else if (my_strcmp(tab[1], "pasta") == 0)
    make_pasta(prog);
  else
    disp_no_meal(tab[1]);
  return (0);
}